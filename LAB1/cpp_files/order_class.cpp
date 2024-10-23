#include "../header_files/order_class.h"

Order::Order(const string& vis_name,const string& phone,const vector<string>& items,const vector<double>& dishes_costs,double full_cost): data(vis_name,phone), dishes_list(items,dishes_costs,full_cost){}

void Order:: delete_dish_from_order(int& number)
{
    dishes_list.delete_dish(number);
}

void Order:: add_dishes_in_list()
{
    dishes_list=dish_menu(dishes_list);
}

void Order:: set_vis_name(string_view vis_name)
{
    data.set_name(vis_name);
}

void Order:: set_vis_phone_number(string_view phone_number)
{
    data.set_number(phone_number);
}

vector<string> Order:: get_list_of_dishes() const
{
    return dishes_list.get_list_of_dishes();
}

bool Order:: operator == (const string& name )
{
    return data.get_name() == name;
}

void Order:: print_order() const
{
    cout<<"***************\n"<<"ДАННЫЕ О ЗАКАЗЕ:\n";
    data.print_visitor();
    dishes_list.print_dishes();
    cout<<"***************\n";
}

void Order:: reduce_full_cost(const int& number)
{
    dishes_list -= dishes_list.get_cost(number) ;
}
#include "../header_files/order_class.h"

Order::Order(const string& vis_name,const string& phone,const vector<string>& items,double full_cost): data(vis_name,phone), dishes_list(items,full_cost){}

void Order:: delete_dishes_from_list()
{
    dishes_list.delete_dish();
}

void Order:: add_dishes_in_list()
{
    dishes_list=dish_menu(dishes_list);
}

void Order:: set_vis_name(string_view vis_name)
{
    data.set_name(vis_name);
}

void Order:: set_vis_phnumber(string_view phone_number)
{
    data.set_number(phone_number);
}


void Order:: print_order() const
{
    cout<<"***************\n"<<"ДАННЫЕ О ЗАКАЗЕ:\n";
    data.print_visitor();
    dishes_list.print_dishes();
    cout<<"***************\n";
}
#include "../header_files/order_class.h"

Order::Order(const string& vis_name,const string& phone,const vector<string>& items,const float& full_cost): data(vis_name,phone), list_of_dishes(items),cost(full_cost){}

void Order:: set_vis_data(string_view vis_name,string_view phone_number)
{
    data.set_name(vis_name);
    data.set_number(phone_number);
}

void Order:: set_dishes(string_view dish, float full_cost)
{
    list_of_dishes.emplace_back(dish);
    cost=full_cost;
}

float Order:: get_cost() const
{
    return cost;
}

string Order:: get_dish_from_list(int i) const
{
    return list_of_dishes[i];
}

size_t Order::size_orders() const
{
    return list_of_dishes.size();
}

void Order:: print_order() const
{
    cout<<"***************\n"<<"ДАННЫЕ О ЗАКАЗЕ:\n";
    data.print_visitor();

    cout<<"Выбранные блюда: \n";
    for (int i=0;i<size_orders();++i)
        cout<<i+1<<')'<<get_dish_from_list(i) <<'\n';

    cout<<"\nОбщая стоимость: "<<get_cost()<<'\n';
    cout<<"***************\n";
}
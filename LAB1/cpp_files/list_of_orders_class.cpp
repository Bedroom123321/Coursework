#include "../header_files/list_of_orders_class.h"
#include "../header_files/visitor_class.h"

void List_of_orders:: add_data(const string& v_name,const string& ph_number,const vector<string>& items,double f_cost)
{
    orders.emplace_back(v_name,ph_number,items,f_cost);
}

void List_of_orders:: print_data(const int& number) const
{
    orders[number].print_order();
}//готова

void List_of_orders:: chang_data(const int& number, string_view new_name)const
{

}

void List_of_orders:: delete_data(const int& number)
{
    auto iter = orders.begin();
    orders.erase(iter + number );
}//ГОТОВА

size_t List_of_orders::size_visitors() const
{
    return orders.size();
}
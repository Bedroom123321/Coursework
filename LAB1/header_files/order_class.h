#ifndef LAB1_ORDER_CLASS_H
#define LAB1_ORDER_CLASS_H

#include "visitor_class.h"
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Order
{
private:

    Visitor data;
    vector<string> list_of_dishes;
    float cost;

public:
    Order(const string& vis_name,const string& phone,const vector<string>& items,const float& full_cost);
    void set_vis_data(string_view vis_name,string_view phone_number);
    void set_dishes(string_view dish, float full_cost);
    void print_order()const;
    [[nodiscard]] float get_cost() const;
    [[nodiscard]] string get_dish_from_list(int i) const;
    [[nodiscard]] size_t size_orders() const;
};
#endif

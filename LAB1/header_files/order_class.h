#ifndef LAB1_ORDER_CLASS_H
#define LAB1_ORDER_CLASS_H

#include "../header_files/dishes.h"
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
    Dishes dishes_list;

public:
    Order(const string& vis_name,const string& phone,const vector<string>& items,double full_cost);
    void set_dishes_list();
    void set_vis_name(string_view vis_name);
    void set_vis_phnumber(string_view phone_number);
    void print_order()const;
    [[nodiscard]] double get_cost() const;
};
#endif

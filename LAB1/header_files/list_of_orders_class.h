#ifndef LIST_OF_VISITORS_H
#define LIST_OF_VISITORS_H
#include <vector>

#include "order_class.h"
#include "../header_files/visitor_class.h"

using std::string;
using std::vector;

class List_of_orders
{
private:

    vector<Order> orders;

public:

    void add_data(const string& v_name,const string& ph_number,const vector<string>& items,double f_cost);

    void print_data(const int& number) const;

    void chang_data(const int& number,string_view new_name) const;

    void delete_data(const int& number);

    [[nodiscard]] size_t size_visitors() const;
};

#endif
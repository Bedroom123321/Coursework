#ifndef LIST_OF_VISITORS_H
#define LIST_OF_VISITORS_H
#include <vector>
#include "visitor_class.h"

using std::string;
using std::vector;

class List_of_visitors
{
private:

    vector<Visitor> visitors;

public:

    void add_data(const string& v_name);

    void print_data(const int& number) const;

    void chang_data(const int& number,const string& new_name);

    void delete_data(const int& number);

    [[nodiscard]] size_t size_visitors() const;
};
#endif
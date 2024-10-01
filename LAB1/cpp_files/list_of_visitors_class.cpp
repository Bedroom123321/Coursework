#include "../header_files/list_of_visitors_class.h"

void List_of_visitors:: add_data(const string& v_name)
{
    visitors.emplace_back(v_name);
}

void List_of_visitors:: print_data(const int& number) const
{
    visitors[number].print_name();
}

void List_of_visitors:: chang_data(const int& number, const string& new_name)
{
    visitors[number].set_name(new_name);
}

void List_of_visitors:: delete_data(const int& number)
{
    auto iter = visitors.begin();
    visitors.erase(iter + number - 1);
}

size_t List_of_visitors::size_visitors() const
{
    return visitors.size();
}
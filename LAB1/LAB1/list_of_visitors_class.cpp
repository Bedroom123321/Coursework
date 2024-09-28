#include <iostream> 
#include "list_of_visitors_class.h" 

void list_of_visitors:: add_data(const std::string& v_name)
{
	visitors[0].set_name(v_name);
}

void list_of_visitors:: print_data()
{
	visitors[0].print_name();
}

void list_of_visitors:: chang_data(const std::string& new_name)
{
	visitors[0].set_name(new_name);
}

void list_of_visitors:: delete_data()
{

}

int list_of_visitors:: get_number() const
{
	return number_of_visitors;
}

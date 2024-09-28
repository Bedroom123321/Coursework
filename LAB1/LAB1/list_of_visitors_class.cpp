#include <iostream> 
#include "list_of_visitors_class.h" 

void list_of_visitors:: add_data(int& number, const std::string& v_name)
{
	visitors[number].set_name(v_name);
}

void list_of_visitors:: print_data(int& number)
{
	visitors[number].print_name();
}

void list_of_visitors:: chang_data(int& number, const std::string& new_name)
{
	visitors[number].set_name(new_name);
}

void list_of_visitors:: delete_data()
{

}

int list_of_visitors:: get_number() const
{
	return number_of_visitors;
}

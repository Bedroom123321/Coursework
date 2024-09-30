#include "visitor_class.h" 

std::string visitor::get_name() const
{
	return name;
}

void visitor :: set_name(const string& vis_name)
{
	name = vis_name;
}

void visitor:: print_name() const
{
	std::cout << get_name();
}


#include "visitor.h" 
#include <iostream> 

void visitor::entering_name()
{
	std::string vis_name;
	std::cin >> vis_name;
	name = vis_name;
}

void visitor::print()
{
	std::cout << name << '\n';
}

void visitor::chang_name()
{
	std::cout << "New name: ";
	std::string new_name;
	std::cin >> new_name;
	name = new_name;
}

void delete_data(int number, visitor* array)
{

}
#include <iostream> 
#include "functions.h"

void case1(list_of_visitors list)
{
	std::string vs_name;
	std::cout << "Enter visitor's data:\n";
	std::cin >> vs_name;
	list.add_data(vs_name); 
	system("cls");
}

void case2(list_of_visitors list)
{
	std::cout << "Visitor's data:\n";
	list.print_data();
	std::cin.ignore();
	system("cls");
}

void case3(list_of_visitors list)
{
	std::cout << "Enter visitor's number to change name\n";
	std::string new_name;
	std::cin >> new_name;
	list.chang_data(new_name); 
	system("cls");
}

void case4()
{
	/*std::cout << "Enter visitor's number to delete data\n";
	int visitor_num;
	std::cin >> visitor_num;
	visitors[visitor_num - 1].delete_data(visitor_num, number_visitors, visitors);
	system("cls");*/
}
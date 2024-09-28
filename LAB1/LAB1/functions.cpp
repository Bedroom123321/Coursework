#include <iostream> 
#include "functions.h"

void case1(list_of_visitors list)
{
	std::cout << "Enter visitor's data:\n";
	for(int i=0;i<3;i++)
	{
		std::string vis_name;
		std::cout << i+1 << ".";
		std::cin >> vis_name;
		list.add_data(i,vis_name);
	}
	system("cls");
}

void case2(list_of_visitors list)
{
	std::cout << "Visitor's data:\n";
	for (int i=0; i < 3; i++)
	{
		std::cout << i+1 << ".";
		list.print_data(i);
		std::cout <<"\n";
	}
	std::cin.ignore();
	system("cls");
}

void case3(list_of_visitors list)
{
	std::cout << "Choose visitor's nember: \n";
	int num;
	std::cin >> num;
	--num;

	std::cout << "Enter new name\n";
	std::string new_name;
	std::cin >> new_name;

	list.chang_data(num,new_name); 
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
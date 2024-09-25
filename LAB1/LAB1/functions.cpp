#include <iostream> 
#include "functions.h"
#include "visitor.h"

void case1(int number, visitor* array)
{
	std::cout << "Enter data of " << number << " visitors:\n";
	for (int i = 0; i < number; i++)
	{
		std::cout << i + 1 << '.';
		array[i].entering_name();
	}
	system("cls");
}

void case2(int number, visitor* array)
{
	std::cout << "Visitor's data:\n";
	for (int i = 0; i < number; i++)
	{
		std::cout << i + 1 << '.';
		array[i].print();
	}

	std::cout << "Press enter to back to menu";
	std::cin.ignore();
	system("cls");
}

void case3(visitor* array)
{
	std::cout << "Enter visitor's number to change name\n";
	int visitor_num;
	std::cin >> visitor_num;

	std::cout << "Visitor's name: ";
	array[visitor_num - 1].print();
	array[visitor_num - 1].chang_name();
	system("cls");
}
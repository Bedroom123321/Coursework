#include <iostream> 
#include "visitor_class.h"
#include "functions.h"

int main()
{
	int number_visitors;
	std::cout << "Enter number of visitors\n";
	std::cin >> number_visitors;
	visitor* visitors = new visitor[number_visitors];
	system("cls");

	int operation_number;
	while (1)
	{
		std::cout << "Number of visitors: " << number_visitors << "\n\n" << "1)Enter visitor data \n" << "2)Show visitor data \n" << "3)Change visitor name \n" << "4)Delete visitor data \n" << "Choose operation: ";
		std::cin >> operation_number;
		std::cin.ignore();
		system("cls");

		switch (operation_number)
		{
		case 1:
			case1(number_visitors, visitors);
			break;

		case 2:
			case2(number_visitors, visitors);
		    break;

		case 3:
			case3(visitors);
			break;

		case 4:
		{
			std::cout << "Enter visitor's number to delete data\n";
			int visitor_num;
			std::cin >> visitor_num;
			visitors[visitor_num-1].delete_data(visitor_num, number_visitors, visitors);
			system("cls");
		}
		break;

		default:
			std::cout << "Enter correct number! \n\n";
			break;
		}
	}
	return 0;
}

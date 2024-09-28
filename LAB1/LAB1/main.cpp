#include <iostream> 
#include "visitor_class.h"
#include "functions.h"
#include "list_of_visitors_class.h" 

int main()
{
	list_of_visitors list;
	int operation_number;

	while (1)
	{
		std::cout
		<< "1)Enter visitor data \n" 
		<< "2)Show visitor data \n" 
		<< "3)Change visitor name \n" 
		<< "4)Delete visitor data \n" 
		<< "Choose operation: ";

		std::cin >> operation_number;
		std::cin.ignore();
		system("cls");

		switch (operation_number)
		{
		case 1:
			case1(list);
			break;

		case 2:
			case2(list);
		    break;

		case 3:
			case3(list);
			break;

		case 4:
			/*case4();*/
			break;

		default:
			std::cout << "Enter correct number! \n\n";
			break;
		}
	}
	return 0;
}

#include "functions.h"

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

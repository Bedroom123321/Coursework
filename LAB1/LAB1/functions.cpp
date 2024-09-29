#include "functions.h"

int num_glob = 0;

void print_menu()
{
	cout<< "1)Enter visitor data \n"
		<< "2)Show visitor data \n"
		<< "3)Change visitor name \n"
		<< "4)Delete visitor data \n"
		<< "Choose operation: ";
}

void case1_enter(list_of_visitors list)
{
	cout << "Enter visitor's data:\n";
	string vis_name;
	cin >> vis_name;
	list.add_data(num_glob,vis_name);
	num_glob++;
	system("cls");
}

void case2_show(list_of_visitors list)
{
	cout << "Visitor's data:\n";
	for (int i=0; i < num_glob; i++)
	{
		cout << i+1 << ".";
		list.print_data(i);
		cout <<"\n";
	}
	cin.ignore();
	system("cls");
}

void case3_change(list_of_visitors list)
{
	cout << "Enter visitor's number to change data\n";
	int number; 
	cin >> number; 
	--number; 

	cout << "Visitor's name: ";
	list.print_data(number); 
	cout << "\n"; 

	cout << "Enter new name: ";
	string new_name;
	cin >> new_name;

	list.chang_data(number,new_name);
	system("cls");
}

void case4_delete(list_of_visitors list)
{
	cout << "Enter visitor's number to delete data\n";
	int vis_num;
	cin >> vis_num;
	--vis_num;

	list.delete_data(vis_num);
	num_glob--;
	system("cls");
}
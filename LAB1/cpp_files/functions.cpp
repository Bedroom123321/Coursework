#include "../header_files/functions.h"

void print_menu()
{
    cout<< "1)Enter visitor's data \n"
        << "2)Show visitor's data \n"
        << "3)Change visitor's name \n"
        << "4)Delete visitor's data \n"
        << "Choose operation: ";
}

List_of_visitors case1_enter(List_of_visitors list)
{
    cout << "Enter visitor's data:\n";

    string vis_name;
    cin >> vis_name;

    list.add_data(vis_name);
    cout<<"\n\n";
    return list;
}

void case2_show(List_of_visitors const&list)
{
    cout << "Visitor's data:\n";
    for (int i=0; i < list.size_visitors(); i++)
    {
        cout << i+1 << ".";
        list.print_data(i);
        cout <<"\n";
    }
    cin.ignore();
    cout<<"\n";
}

List_of_visitors case3_change(List_of_visitors list)
{
    cout << "Enter visitor's number to change data:\n";
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
    cout<<"\n\n";
    return list;
}

List_of_visitors case4_delete(List_of_visitors list)
{
    cout << "Enter visitor's number to delete data:\n";
    int vis_num;
    cin >> vis_num;

    list.delete_data(vis_num);
    cout<<"\n\n";
    return list;
}
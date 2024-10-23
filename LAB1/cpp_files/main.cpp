#include <locale>
#include <iostream>
#include "../header_files/functions.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8"); 

    vector<Order> list_of_orders;
    int operation;

    do
    {
        print_menu();
        operation=checking_operation_number();
        switch (operation)
        {
            case 1:
                list_of_orders = case1_make(list_of_orders);
                break;

            case 2:
                case2_show(list_of_orders);
                break;

            case 3:
                list_of_orders = case3_change(list_of_orders);
                break;

            case 4:
                list_of_orders = case4_delete(list_of_orders);
                break;

            case 5:
                cout<<"Программа закончила работу";
                break;

            default:
                cout<<"Введите номер из списка!"<<std::endl;
                break;
        }
    }while(operation!=5);
}




























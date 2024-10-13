#include <locale>
#include <iostream>
#include "../header_files/functions.h"
#include "..\SQLITE\sqlite3.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8");
  
    List_of_orders list;
    int operation_number;

    while (true)
    {
        print_menu();

        switch (checking_operation_number())
        {
            case 1:
                list = case1_make(list);
                break;

            case 2:
                case2_show(list);
                break;

            case 3:
                list = case3_change(list);
                break;

            case 4:
                list = case4_delete(list);
                break;

            default:
                cout << "Введите корректный номер! \n\n";
                break;
        }
    }
}




























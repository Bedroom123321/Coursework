#include <iostream>
#include "../header_files/functions.h"
#include <limits>

using std::cout;
using std::cin;
using std::string;

int main()
{
    List_of_visitors list;
    int operation_number;

    while (true)
    {
        print_menu();

        cin >> operation_number;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\n";
        }
        
        switch (operation_number)
        {
            case 1:
                list = case1_enter(list);
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
                cout << "Enter correct number! \n\n";
                break;
        }
    }
}

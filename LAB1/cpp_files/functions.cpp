#include "../header_files/functions.h"
#include <limits>
#include "..\SQLITE\sqlite3.h"
#include "../header_files/dishes.h"
#include <string>

int checking_operation_number()
{
    int operation_number;
    cin >> operation_number;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout<<"\n";
    }
    cout<<"\n";
    return operation_number;
}

void print_menu()
{
    cout<< "1)Создать заказ\n"
        << "2)Просмотреть заказ \n"
        << "3)Изменить заказ \n"
        << "4)Удалить заказ \n"
        << "Выберите операцию: ";
}

List_of_orders case1_make(List_of_orders list)
{
    cout << "Введите данные посетителя:\n";
    string vis_name,ph_number;
    cout<<"Введите имя: ";
    std::cin>>vis_name;
    cout<<"Введите номер телефона: ";
    cin>>ph_number;

    cout<<"\nМеню:\n";

    list.add_data(vis_name,ph_number,dish_menu(),15.5);//изменить

    cout<<"\n\n";
    return list;
}

void case2_show(List_of_orders const&list)
{
    cout << "Введите номер заказа, чтобы просмотреть его:\n";
    int number;
    cin>>number;

    list.print_data(--number);
    cout <<"\n";

    cin.ignore();
    cout<<"\n";
}//ГОТОВА

List_of_orders case3_change(List_of_orders list)
{
    cout << "Введите номер заказа, чтобы изменить данные:\n";
    int number;
    cin>>number;

    cout << "Данные заказа: ";
    list.print_data(--number);
    cout << "\n";

    cout<< "1)Изменить имя посетителя\n"
        << "2)Изменить номер телефона \n"
        << "3)Изменить позиции блюд в закзазе \n"
        << "Выберите операцию: ";

    switch(checking_operation_number())
    {
        case 1:
        {
            cout << "Введите новое имя: ";
            string new_name;
            cin >> new_name;
            list.chang_data(--number,new_name);//изменить
        }
            break;

        case 2:
        {
            cout << "Введите новый номер телефона: ";
            string new_phnumber;
            cin >> new_phnumber;
            list.chang_data(--number,new_phnumber);//изменить
        }
            break;

        case 3:
            //изменение позиций в заказе(добавление,удаление)
            break;

        default:
            cout << "Введите корректный номер! \n\n";
            break;
    }
    cout<<"\n\n";
    return list;
}

List_of_orders case4_delete(List_of_orders list)
{
    cout << "Введите номер закака, чтобы удалить его:\n";
    int number;
    cin>>number;

    list.delete_data(--number);
    cout<<"\n\n";
    return list;
}//ГОТОВА
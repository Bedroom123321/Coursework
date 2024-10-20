#include "../header_files/functions.h"
#include <limits>
#include "..\SQLITE\sqlite3.h"
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

vector<Order> case1_make(vector<Order> list)
{
    cout << "Введите данные посетителя:\n";
    string vis_name;
    cout<<"Введите имя:";
    cin>>vis_name;
    string ph_number;
    cout<<"Введите номер телефона:";
    cin>>ph_number;

    cout<<"\nМеню:\n";

    Dishes buffer;
    buffer=dish_menu(buffer);

    list.emplace_back(vis_name, ph_number, buffer.get_list(), buffer.get_full_cost());

    cout<<"\n\n";
    return list;
}//ГОТОВА

void case2_show(vector<Order> const&list)
{
    cout << "Введите номер заказа, чтобы просмотреть его:\n";
    int number;
    cin>>number;
    --number;

   list[number].print_order();
    cout <<"\n";

    cin.ignore();
    cout<<"\n";
}//ГОТОВА

vector<Order> case3_change(vector<Order> list)
{
    cout << "Введите номер заказа, чтобы изменить данные:\n";
    int number;
    cin>>number;
    --number;

    list[number].print_order();
    cout << "\n";

    cout<< "1)Изменить имя посетителя\n"
        << "2)Изменить номер телефона \n"
        << "3)Добавить позиции в закзаз \n"
        << "4)Удалить позиции из заказа"
        << "Выберите операцию: ";

    int operation=checking_operation_number();

    switch(operation)
    {
        case 1:
        {
            cout << "Введите новое имя: ";
            string new_name;
            cin >> new_name;
            list[number].set_vis_name(new_name);
        }
            break;

        case 2:
        {
            cout << "Введите новый номер телефона: ";
            string new_phnumber;
            cin >> new_phnumber;
            list[number].set_vis_phnumber(new_phnumber);
        }
            break;

        case 3:
            list[number].add_dishes_in_list();
            break;

        case 4:
        {
            list[number].delete_dishes_from_list();
        }
            break;

        default:
            cout << "Введите корректный номер! \n\n";
            break;
    }
    cout<<"\n\n";
    return list;
}

vector<Order> case4_delete(vector<Order> list)
{
    cout << "Введите номер закака, чтобы удалить его:\n";
    int number;
    cin>>number;
    --number;

    auto iter = list.begin();
   list.erase(iter + number );
    cout<<"\n\n";
    return list;
}//ГОТОВА
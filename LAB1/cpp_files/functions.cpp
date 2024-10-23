#include "../header_files/functions.h"
#include <limits>
#include <string>
#include <sstream>

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
    cout<< "1)Создать заказ \n"
        << "2)Просмотреть заказ \n"
        << "3)Изменить заказ \n"
        << "4)Удалить заказ \n"
        << "5)Выход из программы \n"
        << "Выберите операцию: ";
}

string enter_name_string()
{
    string name;
    std::cin.ignore();
    std::getline(std::cin, name);
    return name;
}

vector<Order> delete_dish(vector<Order> list, int number )
{
    std::cin.ignore();
    string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int i;
    while (ss >> i) {
        if (i > 0 && i <= list[number].get_list_of_dishes().size()) {
            --i;
            list[number].reduce_full_cost(i);
            ++i;
            list[number].delete_dish_from_order(i);
        } else if (i > 0) {
            i -= 1;
            if (i <= list[number].get_list_of_dishes().size())
                --i;
            list[number].reduce_full_cost(i);
            ++i;
            list[number].delete_dish_from_order(i);
        }
    }
    return list;
}

vector<Order> case1_make(vector<Order> list)
{
    cout << "Введите данные посетителя:\n";
    cout<<"Введите имя:";
    string vis_name=enter_name_string();

    int i=0;
    if(!list.empty())
    {
        while(i<list.size() )
        {
            if(list[i] == vis_name)
            {
                cout<<"Такое имя уже используется, введите другое"<<std::endl;
                std::getline(std::cin, vis_name);
            }
            else
                i++;
        }
    }

    string ph_number;
    cout<<"Введите номер телефона:";
    cin>>ph_number;

    cout<<"\nМеню:\n";

    Dishes buffer;
    buffer=dish_menu(buffer);

    list.emplace_back(vis_name, ph_number, buffer.get_list_of_dishes(),buffer.get_list_of_costs(), buffer.get_full_cost());

    cout<<"\n\n";
    return list;
}

void case2_show(vector<Order> const&list)
{
    cout << "Введите номер заказа, чтобы просмотреть его:\n";
    int number;
    cin>>number;
    --number;

   list[number].print_order();
    cout <<"\n";
}

vector<Order> case3_change(vector<Order> list)
{
    cout << "Введите номер заказа, чтобы изменить данные:\n";
    int number;
    cin>>number;
    --number;

    list[number].print_order();
    cout << "\n";

    int operation;
do
{
    cout << "1)Изменить имя посетителя\n"
         << "2)Изменить номер телефона\n"
         << "3)Добавить позиции в закзаз\n"
         << "4)Удалить позиции из заказа\n"
         << "5)Вернуться назад\n"
         << "Выберите операцию: ";

    operation = checking_operation_number();

    switch (operation)
    {
        case 1: {
            cout << "Введите новое имя: ";
            string new_name = enter_name_string();

            list[number].set_vis_name(new_name);
        }
            break;

        case 2: {
            cout << "Введите новый номер телефона: ";
            string new_phone_number;
            cin >> new_phone_number;

            list[number].set_vis_phone_number(new_phone_number);
        }
            break;

        case 3: {
            list[number].add_dishes_in_list();
        }
            break;

        case 4: {
            list=delete_dish(list,number);
        }
            break;

        case 5: {
            return list;
        }

        default:
            cout << "Введите номер из списка! \n\n";
            break;
    }
} while (operation!=5);
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
}
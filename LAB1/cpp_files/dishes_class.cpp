#include "../header_files/dishes_class.h"
#include <sstream>

Dishes:: Dishes(const vector<string>& dish_names,const vector<double>& dish_costs,const double& dish_cost):list_of_dishes(dish_names),costs_of_dishes(dish_costs),full_cost(dish_cost){}

void Dishes::delete_dish(int& number)
{
    auto iter1 = list_of_dishes.begin();
    list_of_dishes.erase(iter1 + number - 1);
    auto iter2 = costs_of_dishes.begin();
    costs_of_dishes.erase(iter2 + number -1);
}

void Dishes:: set_dish(const string& dish)
{
    list_of_dishes.emplace_back(dish);
}

void Dishes:: set_costs(const double& cost)
{
    costs_of_dishes.emplace_back(cost);
}

vector<string> Dishes:: get_list_of_dishes() const
{
    return list_of_dishes ;
}

vector<double> Dishes:: get_list_of_costs() const
{
    return costs_of_dishes;
}

double Dishes:: get_full_cost()const
{
    return full_cost;
}

double Dishes:: get_cost(const int& number)const
{
    return costs_of_dishes[number];
}

void Dishes:: print_dishes() const
{
    cout<<"Выбранные блюда:"<<'\n';
    for(int i=0;i<get_list_of_dishes().size();++i)
        cout<<i+1<<')'<<get_list_of_dishes()[i]<<'\n';
    cout<<"Общая стоимость: "<<get_full_cost()<<'\n';
}

void Dishes:: operator +=(const double& cost)
{
    full_cost += cost;
}

void Dishes:: operator -=(const double& cost)
{
    full_cost -= cost;
}


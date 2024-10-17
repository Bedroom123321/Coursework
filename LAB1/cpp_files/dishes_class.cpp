#include "../header_files/dishes_class.h"

Dishes:: Dishes(const vector<string>& dish_names,const double& dish_cost):list_of_dishes(dish_names),full_cost(dish_cost){}

void Dishes:: set_dish(const string& dish)
{
    list_of_dishes.emplace_back(dish);
}

void Dishes:: set_cost(const double& cost)
{
    full_cost+=cost;
}

vector<string> Dishes:: get_list()const
{
    return list_of_dishes ;
}

double Dishes:: get_full_cost()const
{
    return full_cost;
}

void Dishes:: print_dishes() const
{
    cout<<"Выбранные блюда:"<<'\n';
    for(int i=0;i<get_list().size();++i)
        cout<<i+1<<')'<<get_list()[i]<<'\n';
    cout<<"Общая стоимость: "<<get_full_cost()<<'\n';
}


#ifndef LAB1_DISHES_CLASS_H
#define LAB1_DISHES_CLASS_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Dishes
{
    friend Dishes dish_menu(Dishes buf);
private:
    vector<string> list_of_dishes;
    vector<double> costs_of_dishes;
    double full_cost=0;
public:
    Dishes()=default;

    Dishes(const vector<string>& dish_names,const vector<double>& dish_costs,const double& dish_cost);

    void delete_dish(const int& number);

    void set_dish(const string& dish);

    void set_costs(const double& cost);

    [[nodiscard]] vector<string> get_list_of_dishes() const;

    [[nodiscard]]  vector<double> get_list_of_costs() const;

    [[nodiscard]] double get_full_cost()const;

    [[nodiscard]] double get_cost(const int& number)const;

    void print_dishes()const;

    void operator +=(const double& cost);

    void operator -=(const double& cost);
};

#endif //LAB1_DISHES_CLASS_H

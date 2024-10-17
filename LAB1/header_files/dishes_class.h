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
private:
    vector<string> list_of_dishes;
    double full_cost=0;
public:
    Dishes()=default;
    Dishes(const vector<string>& dish_names,const double& dish_cost);
    void set_dish(const string& dish);
    void set_cost(const double& cost);
    [[nodiscard]] vector<string> get_list()const;
    [[nodiscard]] double get_full_cost()const;
    void print_dishes()const;
};


#endif //LAB1_DISHES_CLASS_H

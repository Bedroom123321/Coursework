#ifndef LAB1_DISHES_H
#define LAB1_DISHES_H

#include <iostream>
#include "..\SQLITE\sqlite3.h"
#include "../header_files/dishes_class.h"
#include <vector>


using std::string;
using std::vector;
using std::cout;
using std::cin;

struct dish
{
    string dish_name;
    double cost;
};

Dishes dish_menu(Dishes buf);
#endif
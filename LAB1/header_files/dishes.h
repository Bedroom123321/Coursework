#ifndef LAB1_DISHES_H
#define LAB1_DISHES_H

#include <iostream>
#include "..\SQLITE\sqlite3.h"
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

struct dishes
{
    string dish;
    double cost;
};

int callback(void* data, int colum_count,char** columns, char** colum_name);
vector<string> dish_menu();

#endif
#pragma once
#include "list_of_visitors_class.h" 

using std::cout;
using std::cin;
using std::string;

void print_menu();
list_of_visitors case1_enter(list_of_visitors list); 
void case2_show(list_of_visitors list);
list_of_visitors case3_change(list_of_visitors list);
list_of_visitors case4_delete(list_of_visitors list);
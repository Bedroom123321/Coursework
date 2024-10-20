#include "../header_files/order_class.h"

using std::cout;
using std::cin;
using std::string;

int checking_operation_number();

void print_menu();

vector<Order> case1_make(vector<Order> list);

void case2_show(vector<Order> const& list);

vector<Order> case3_change(vector<Order> list);

vector<Order> case4_delete(vector<Order> list);
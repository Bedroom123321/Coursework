#include "../header_files/dishes.h"
#include <sstream>

Dishes dish_menu(Dishes buf)
{
sqlite3* database;
sqlite3_stmt *res;

int code = sqlite3_open("Dish_menu",&database);
if(code != SQLITE_OK){std::cerr<<"Ошибка подключения к базе данных:"<<sqlite3_errmsg(database);}

string sql = "SELECT dish, cost FROM dishes;";

code = sqlite3_prepare_v2(database, sql.c_str(), -1, &res, nullptr);
if(code != SQLITE_OK){std::cerr<<"Ошибка подготовки запроса:"<<sqlite3_errmsg(database);}

vector<dish> dish_menu;
while (sqlite3_step(res) == SQLITE_ROW)
{
const unsigned char *dish_text = sqlite3_column_text(res, 0);
const double cost = sqlite3_column_double(res,1);
dish_menu.emplace_back(reinterpret_cast<const char *>(dish_text),cost);
}

sqlite3_finalize(res);
sqlite3_close(database);


    for (int i = 0; i < dish_menu.size(); ++i)
    {
        std::cout << i + 1 << ") Блюдо: " << dish_menu[i].dish_name << " цена: " << dish_menu[i].cost<< std::endl;
    }
    std::cin.ignore();
    string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int i;
    while (ss >> i)
    {
        if (i > 0 && i <= dish_menu.size())
        {
            --i;
            buf.set_dish(dish_menu[i].dish_name);
            buf.set_cost(dish_menu[i].cost);
        }
    }
    return buf ;
}
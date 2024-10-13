#include "../header_files/dishes.h"

vector<string> dish_menu()
{
sqlite3* database;
sqlite3_stmt *res;

int code = sqlite3_open("Dish_menu",&database);
if(code != SQLITE_OK){std::cerr<<"Ошибка подключения к базе данных:"<<sqlite3_errmsg(database);}

string sql = "SELECT dish, cost FROM dishes;";

code = sqlite3_prepare_v2(database, sql.c_str(), -1, &res, nullptr);
if(code != SQLITE_OK){std::cerr<<"Ошибка подготовки запроса:"<<sqlite3_errmsg(database);}

vector<dishes> dish_menu;
for (int i=0; sqlite3_step(res) == SQLITE_ROW; ++i)
{
const unsigned char *dish_text = sqlite3_column_text(res, 0);
const double cost = sqlite3_column_double(res,1);
dish_menu.emplace_back(reinterpret_cast<const char *>(dish_text),cost);
cout<<"Блюдо: "<<dish_menu[i].dish<<" цена: "<<dish_menu[i].cost<<'\n';
}
sqlite3_finalize(res);
sqlite3_close(database);

vector<string> dishes;
    while (true)
    {
        int i;
        cin>>i;
        if(i!=10)
        dishes.emplace_back(dish_menu[i--].dish);
        else break;
    }

cout<<'\n';
    return dishes;
}
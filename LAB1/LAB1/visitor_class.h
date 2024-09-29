#pragma once
#include <iostream> 

using std::string;

class visitor
{
private:

	string name;

public:

	string get_name() const;//готово

	void set_name(const string& vis_name);//готово

	void print_name();//готово


};

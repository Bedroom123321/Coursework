#pragma once
#include <iostream> 

class visitor
{
private:

	std::string name;

public:

	std::string get_name() const;//готово

	void set_name(const std::string& vis_name);//готово

	void print_name();//готово


};

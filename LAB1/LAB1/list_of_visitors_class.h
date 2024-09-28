#pragma once
#include <iostream> 
#include "visitor_class.h" 


class list_of_visitors
{
private:

	static const int number_of_visitors = 3;//временно
	visitor* visitors = new visitor[number_of_visitors];  

public:

	void add_data(int& number, const std::string& v_name);//работает

	void print_data(int& number);//работает

	void chang_data(int& number,const std::string& new_name);//работает

	void delete_data();//не готово

	int get_number() const;//готово

};
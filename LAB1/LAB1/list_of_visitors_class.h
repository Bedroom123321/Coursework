#pragma once
#include <iostream> 
#include "visitor_class.h" 


class list_of_visitors
{
private:

	static const int number_of_visitors = 5;//��������
	visitor* visitors = new visitor[number_of_visitors];  

public:

	void add_data(const std::string& v_name);//��������

	void print_data();//��������

	void chang_data(const std::string& new_name);//��������

	void delete_data();//�� ������

	int get_number() const;//������

};
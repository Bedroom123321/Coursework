#pragma once
#include "visitor_class.h" 

using std::string;

class list_of_visitors
{
private:

	int number_of_visitors;
	visitor* visitors;  

public:

	list_of_visitors();

	void add_data(int& num, const string& v_name);//��������

	void print_data(int& number);//�������� 

	void chang_data(int& number,const string& new_name);//��������

	void delete_data(int& number);//�� ������

};
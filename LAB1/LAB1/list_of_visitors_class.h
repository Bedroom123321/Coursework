#pragma once
#include "visitor_class.h" 

using std::string;

class list_of_visitors
{
private:

	int number_of_visitors = 100;
	visitor* visitors = new visitor[number_of_visitors];

public:

	void add_data( const int& num, const string& v_name);//��������

	void print_data(const int& number) const;//�������� 

	void chang_data(const int& number,const string& new_name);//��������

	void delete_data(const int& number);//�� ������

};
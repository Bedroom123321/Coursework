#pragma once
#include <iostream> 

class visitor
{
private:

	std::string name;

public:

	void entering_name();

	void print();

	void chang_name();

	void delete_data(int number, int size, visitor* array);

};
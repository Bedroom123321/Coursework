#pragma once
#include <iostream> 

class visitor
{
private:

	std::string name;

public:

	std::string get_name() const;//������

	void set_name(const std::string& vis_name);//������

	void print_name();//������


};

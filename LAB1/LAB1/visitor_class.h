#pragma once
#include <iostream> 
using std::string;

class visitor
{
private:

	string name;

public:

	string get_name() const;//������

	void set_name(const string& vis_name);

	void print_name() const;//������


};

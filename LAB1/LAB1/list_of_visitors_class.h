#pragma once
#include <vector>
#include "visitor_class.h" 

using std::string;
using std::vector;

class list_of_visitors
{
private:

	vector<visitor> visitors;

public:

	void add_data(const string& v_name);

	void print_data(const int& number) const;

	void chang_data(const int& number,const string& new_name);

	void delete_data(const int& number);

	size_t size_visitors() const;
};
#include "list_of_visitors_class.h" 

list_of_visitors::list_of_visitors():number_of_visitors (3), visitors(new visitor[number_of_visitors]){}

void list_of_visitors:: add_data(const int&num,const string& v_name)
{
	visitors[num].set_name(v_name);
}

void list_of_visitors:: print_data(const int& number)
{
	visitors[number].print_name();
}

void list_of_visitors:: chang_data(const int& number, const string& new_name)
{
	visitors[number].set_name(new_name);
}

void list_of_visitors:: delete_data(const int& number)
{
	auto* new_visitors = new visitor[number_of_visitors];

	for (int i = 0, j = 0; i < number_of_visitors; ++i)
	{
		if (i != number)
		{
			new_visitors[j++] = visitors[i];
		}
	}

	delete [] visitors;
	visitors = new_visitors;
}


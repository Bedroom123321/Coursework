#include "../header_files/visitor_class.h"

string Visitor::get_name() const
{
    return name;
}

string Visitor::get_number() const
{
    return phone_number;
}

Visitor::Visitor(const string& vis_name, const string& phone):name(vis_name),phone_number(phone){}

void Visitor :: set_name( string_view vis_name)
{
    name = vis_name;
}

void Visitor :: set_number( string_view phone)
{
    phone_number = phone;
}

void Visitor:: print_visitor() const
{
    std::cout<<"Данные посетителя:\nИмя: " << get_name()<<"\nНомер телефона: "<<get_number()<<"\n\n";
}


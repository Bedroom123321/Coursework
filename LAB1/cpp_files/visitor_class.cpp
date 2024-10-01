#include "../header_files/visitor_class.h"

std::string Visitor::get_name() const
{
    return name;
}

Visitor::Visitor(const string& vis_name):name(vis_name){}

void Visitor :: set_name( string_view vis_name)
{
    name = vis_name;
}

void Visitor:: print_name() const
{
    std::cout << get_name();
}


#ifndef VISITOR_CLASS_H
#define VISITOR_CLASS_H
#include <iostream>

using std::string;
using std::string_view;

class Visitor
{
private:

    string name;
    string phone_number;

public:

    [[nodiscard]] string get_name() const;
    [[nodiscard]] string get_number() const;

    explicit Visitor(const string& vis_name, const string& phone);

    void set_name(string_view vis_name);

    void set_number( string_view phone);

    void print_visitor() const;
};

#endif
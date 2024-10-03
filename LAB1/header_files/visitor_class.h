#ifndef VISITOR_CLASS_H
#define VISITOR_CLASS_H
#include <iostream>

using std::string;
using std::string_view;

class Visitor
{
private:

    string name;

public:

    [[nodiscard]] string get_name() const;

    explicit Visitor(const string& vis_name);

    void set_name(string_view vis_name);

    void print_name() const;
};

#endif
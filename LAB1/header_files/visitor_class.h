#ifndef VISITOR_CLASS_H
#define VISITOR_CLASS_H


#include <iostream>
using std::string;

class Visitor
{
private:

    string name;

public:

    string get_name() const;

    explicit Visitor(const string& vis_name);

    void set_name(const string& vis_name);

    void print_name() const;


};
#endif
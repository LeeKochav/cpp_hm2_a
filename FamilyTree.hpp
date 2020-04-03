#pragma once

#include<string>
#include <iostream>

using namespace std;

namespace family
{
    class Tree
    {
    private:


    public:
    Tree(string name);
    Tree& addFather(string child, string father);
    Tree& addMother(string child, string mother);
    string relation(string name);
    string find (string relation);
    void display();
    void remove(string name);
    };
};



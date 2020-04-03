#include "FamilyTree.hpp"

#include <stdexcept>

using namespace family;

 Tree::Tree(string name){
 };

Tree& Tree::addFather(string child, string father){
    return *this;
};
Tree& Tree::addMother(string child, string mother){
    return *this;
};
string Tree::relation(string name)
{
    return "ab";
}
string Tree:: find (string relation)
{
        return "ab";
};

void Tree::display(){};
void Tree::remove(string name){};
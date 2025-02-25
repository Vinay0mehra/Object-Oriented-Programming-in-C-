// C++ program to demonstrate member function
// definition outside class
#include <bits/stdc++.h>
using namespace std;
class print
{
public:
    string name;
    int id;

    // printname is not defined inside class definition
    void printname();

    // printid is defined inside class definition
    void printid() { cout << "Geek id is: " << id; }
};

// Definition of printname using scope resolution operator
// ::
void print ::printname()
{
    cout << "Geekname is: " << name;
}
int main()
{

    print
        obj1;
    obj1.name = "xyz";
    obj1.id = 15;

    // call printname()
    obj1.printname();
    cout << endl;

    // call printid()
    obj1.printid();
    return 0;
}

// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
private:
    string geekname;
    // Access specifier
public:
    // Member Functions()
    void setName(string name) { geekname = name; }

    void printname() { cout << "Geekname is:" << geekname; }
};
int main()
{
    // Declare an object of class geeks
    Geeks obj1;
    // accessing data member
    // cannot do it like: obj1.geekname = "Abhi";
    obj1.setName("Abhi");
    // accessing member function
    obj1.printname();
    return 0;
}

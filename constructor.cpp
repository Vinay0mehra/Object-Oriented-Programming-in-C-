// C++ program to demonstrate constructors
#include <bits/stdc++.h>
using namespace std;
class const
{
public:
    int id;

    // Default Constructor
    student()
    {
        cout << "Default Constructor called" << endl;
        id = -1;
    }

    // Parameterized Constructor
    Geeks(int x)
    {
        cout << "Parameterized Constructor called " << endl;
        id = x;
    }
};
int main()
{

    // obj1 will call Default Constructor
    const obj1;
    cout << "member id is: " << obj1.id << endl;

    // obj2 will call Parameterized Constructor
    const obj2(21);
    cout << "member id is: " << obj2.id << endl;
    return 0;
}

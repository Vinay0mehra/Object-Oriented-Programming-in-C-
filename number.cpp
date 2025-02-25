#include <iostream>

using namespace std;

struct Phone
{
    int area;
    int exchange;
    int number;
};

int main()
{
    cout << "Name: Vinay Mehra\n";
    cout << "Roll No: 2023078098\n";
    Phone p1, p2;
    p1.area = 415;
    p1.exchange = 222;
    p1.number = 343;
    cout << "Enter Your Area Code,Exchange And Number";
    cin >> p2.area;
    cin >> p2.exchange;
    cin >> p2.number;
    cout << "\nMy Number Is : (" << p1.area << ")" << p1.exchange << "-" << p1.number;
    cout << "\nYour Number Is : (" << p2.area << ")" << p2.exchange << "-" << p2.number;
}

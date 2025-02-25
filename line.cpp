#include <iostream>

using namespace std;

struct point
{
    int x, y;
};

void line()
{
    cout << '\n';
    for (int i = 0; i <= 60; i++)
        cout << "-";
}

int main()
{
    cout << "Name: Vinay Mehra\n";
    cout << "Roll No: 2023078098\n";
    point p1, p2, p3;
    cout << "\n\nEnter the coordinates of the first point(P1): ";
    cin >> p1.x >> p1.y;

    cout << "\n\nEnter the coordinates of the second point(P2): ";
    cin >> p2.x >> p2.y;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "\n\nCoordinates of Third Point (P1+P2) Are: " << p3.x << " , " << p3.y;
    line();
}
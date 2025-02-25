#include <iostream>

using namespace std;
double Power(double m, int n = 2);
void line(int n);

int main()
{
    double n, res;
    int p;
    cout << "Name: Vinay Mehra\n";
    cout << "Roll No: 2023078098\n";
    cout << "\n\n Power Calculator";
    line(15);
    cout << "\n\nEnter The Number You Want Power Of:";
    cin >> n;
    cout << "\n\nEnter The Power Of:" << n << ":";
    cin >> p;
    res = Power(n, p);
    line(70);
    cout << "\n\nThe Result Of " << n << " to The Power " << p << "Is :" << res;
    cout << "\n\nThe Result Of " << n << " to The Power 2 using Default Argument(2) Is :" << Power(n);
    line(70);
}

double Power(double m, int n)
{
    double a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * m;
    }
    return a;
}

void line(int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << "-";
    }
}
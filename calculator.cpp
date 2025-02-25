#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Name: Vinay Mehra\n";
    cout << "Roll No: 2023078098\n";
    double a, b, c;
    char op, ch;
    do
    {
        cout << "Enter First Number,Operator,Second Number";
        cin >> a >> op >> b;

        switch (op)
        {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = (float)(a / b);
            break;
        default:
            cout << "Invalid Operator";
            break;
        }
        cout << "\nAnswer : " << a << op << b << "=" << c;
        cout << "\nDo You Want To Continue(Y/N)";
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
    getch();
}

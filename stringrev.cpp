#include <iostream>
#include <cstring> // Use for strlen
using namespace std;

void reverseit(char *p)
{
    int j;
    int len = strlen(p);
    j = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        char a = p[i];
        p[i] = p[j];
        p[j] = a;
        j--;
    }
    cout << "\n\nReverse of the string is: " << p << endl;
}

int main()
{
    char str[50];
    char ch;
    do
    {
        cout << "\n\nReverse Finder";
        cout << "\n________________";
        cout << "\n\nEnter the string: ";
        cin.getline(str, 50); // Using cin.getline instead of gets()
        reverseit(str);
        cout << "\n\nDo you want to continue? (y/n): ";
        cin >> ch;
        cin.ignore(); // To ignore the newline character in the input buffer
        cout << "\n\n";
    } while (ch != 'n');

    return 0;
}

#include <iostream>
using namespace std;

class Toll
{
    unsigned int Paying_car;
    unsigned int non_Paying_car;
    int total_car;
    double cash;

public:
    // Constructor to initialize data members
    Toll()
    {
        total_car = 0;
        Paying_car = 0;
        non_Paying_car = 0;
        cash = 0.0;
    }

    // Function to handle paying car
    void Paying()
    {
        cash += 0.50;
        Paying_car++;
        total_car++;
    }

    // Function to handle non-paying car
    void non_Paying()
    {
        non_Paying_car++;
        total_car++;
    }

    // Function to display data
    void Display() const
    {
        cout << "\nTotal Cars     : " << total_car;
        cout << "\nTotal Cash     : " << cash;
        cout << "\nPaying Cars    : " << Paying_car;
        cout << "\nNon Paying Cars: " << non_Paying_car;
    }
};

int main()
{
    Toll t;
    char ch;

    do
    {
        cout << "\n\n   Enter Your Choice (1 for Paying, 2 for Non-Paying, q to Quit): ";
        cin >> ch;
        if (ch == '1')
        {
            t.Paying();
        }
        else if (ch == '2')
        {
            t.non_Paying();
        }
    } while (ch != 'q'); // 'q' to quit

    t.Display();
    return 0;
}

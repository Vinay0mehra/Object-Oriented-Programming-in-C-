#include <iostream>
#include <cmath> // For using pow function
using namespace std;

class dm; // Forward declaration
class db; // Forward declaration

void add(dm, db, int);

class dm
{
    double m, cm; // meters and centimeters

public:
    // Function to initialize meters and centimeters
    void init()
    {
        cout << "\n\nEnter Distance In Meters and Centimeters: ";
        cin >> m >> cm;
    }

    // Function to display the result
    void display()
    {
        cout << "\nAddition Of Distances Is: " << m << " Meters " << cm << " Centimeters" << endl;
    }

    // Friend function to access private members
    friend void add(dm, db, int);
};

class db
{
    double f, in; // feet and inches

public:
    // Function to initialize feet and inches
    void init()
    {
        cout << "\n\nEnter Distance In Feet and Inches: ";
        cin >> f >> in;
    }

    // Function to display the result
    void display()
    {
        cout << "\nAddition Of Distances Is: " << f << " Feet " << in << " Inches" << endl;
    }

    // Friend function to access private members
    friend void add(dm, db, int);
};

// Function to add distances and display the result in either meters/centimeters or feet/inches
void add(dm p, db q, int choice)
{
    dm temp1;
    db temp2;

    // If the result is needed in meters and centimeters
    if (choice == 1)
    {
        temp1.m = p.m + (q.f * 0.3048);  // Convert feet to meters (1 foot = 0.3048 meters)
        temp1.cm = p.cm + (q.in * 2.54); // Convert inches to centimeters (1 inch = 2.54 cm)

        // Handle overflow: 100 centimeters = 1 meter
        if (temp1.cm >= 100)
        {
            temp1.m += (int)(temp1.cm / 100);
            temp1.cm = fmod(temp1.cm, 100);
        }

        temp1.display();
    }

    // If the result is needed in feet and inches
    else if (choice == 2)
    {
        temp2.f = q.f + (p.m / 0.3048);  // Convert meters to feet (1 meter = 3.28084 feet)
        temp2.in = q.in + (p.cm / 2.54); // Convert centimeters to inches

        // Handle overflow: 12 inches = 1 foot
        if (temp2.in >= 12)
        {
            temp2.f += (int)(temp2.in / 12);
            temp2.in = fmod(temp2.in, 12);
        }

        temp2.display();
    }
}

// Main function
int main()
{
    dm m;
    db b;
    int choice;

    cout << "\n\nDistance Adder";
    cout << "\n_______________";

    // Initialize distances
    m.init();
    b.init();

    cout << "\nMain Menu:";
    cout << "\nEnter The Units Of Required Result:";
    cout << "\n1. Meters and Centimeters";
    cout << "\n2. Feet and Inches";
    cout << "\nEnter Choice: ";
    cin >> choice;

    // Perform the addition based on user's choice
    if (choice == 1 || choice == 2)
    {
        add(m, b, choice);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    // Pause the output to view results
    cin.get();
    cin.get();

    return 0;
}

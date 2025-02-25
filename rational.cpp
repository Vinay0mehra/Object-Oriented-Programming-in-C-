#include <iostream>
#include <cmath>

using namespace std;

class Rational
{
    double num, den; // Numerator and Denominator

public:
    // Default constructor
    Rational() : num(0.0), den(1.0) {}

    // Parameterized constructor
    Rational(double a, double b) : num(a), den(b)
    {
        if (den == 0)
        {
            cout << "Denominator cannot be zero. Setting denominator to 1." << endl;
            den = 1.0;
        }
    }

    // Function to reduce the rational number
    void reduce()
    {
        // Simplifying the rational number using Euclid's algorithm
        double x = num, y = den;
        while (y != 0)
        {
            double temp = y;
            y = fmod(x, y); // Use floating-point modulus
            x = temp;
        }
        num /= x; // Divide numerator by gcd
        den /= x; // Divide denominator by gcd
    }

    // Overloading + operator
    Rational operator+(const Rational &r2)
    {
        Rational temp;
        temp.num = (num * r2.den) + (r2.num * den);
        temp.den = den * r2.den;
        temp.reduce(); // Reduce the result after addition
        return temp;
    }

    // Overloading >> operator
    friend istream &operator>>(istream &in, Rational &r2);

    // Overloading << operator
    friend ostream &operator<<(ostream &out, const Rational &r2);
};

// Overload >> operator for input
istream &operator>>(istream &in, Rational &r2)
{
    cout << "\nEnter Numerator: ";
    in >> r2.num;

    cout << "Enter Denominator: ";
    in >> r2.den;

    // Denominator should not be zero
    if (r2.den == 0)
    {
        cout << "Denominator cannot be zero. Setting denominator to 1." << endl;
        r2.den = 1.0;
    }

    return in;
}

// Overload << operator for output
ostream &operator<<(ostream &out, const Rational &r2)
{
    out << r2.num << "/" << r2.den;
    return out;
}

// Main function
int main()
{
    Rational r2, r3;
    double n1, d1;

    cout << "Enter First Rational Number:";
    cout << "\n\nEnter The Numerator: ";
    cin >> n1;
    cout << "Enter The Denominator: ";
    cin >> d1;

    // Create first rational number object
    Rational r1(n1, d1);

    cout << "\n\nEnter The 2nd Rational Number:\n";
    cin >> r2;

    // Reduce both numbers
    r1.reduce();
    r2.reduce();

    // Display first and second rational numbers
    cout << "\n\n1st Number: " << r1;
    cout << "\n\n2nd Number: " << r2;

    // Add the rational numbers
    r3 = r1 + r2;

    // Reduce the result
    r3.reduce();

    // Display the result
    cout << "\n\nResult: " << r1 << " + " << r2 << " = " << r3;

    // Pause to display result
    cin.get(); // Replaces getch() to wait for user input

    return 0;
}

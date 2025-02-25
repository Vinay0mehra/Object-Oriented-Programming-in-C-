#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Dates
{
    int date;
    int month;
    int year;
};

class Hospital
{
    char name[50];
    Dates AdmDate;
    char Disease[50];
    Dates DisDate;

public:
    void getdata()
    {
        cout << "\n Enter Name Of Patient: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "\n Enter Date Of Admission: ";
        cout << "\n\t Enter Day: ";
        cin >> AdmDate.date;
        cout << "\t Enter Month: ";
        cin >> AdmDate.month;
        cout << "\t Enter Year: ";
        cin >> AdmDate.year;
        cout << "\n Enter Disease: ";
        cin.ignore();
        cin.getline(Disease, 50);
        cout << "\n Enter Date Of Discharge: ";
        cout << "\n\t Enter Day: ";
        cin >> DisDate.date;
        cout << "\t Enter Month: ";
        cin >> DisDate.month;
        cout << "\t Enter Year: ";
        cin >> DisDate.year;
    }

    void Display()
    {
        cout << "\n"
             << setw(5) << name
             << setw(15) << Disease
             << setw(10) << AdmDate.date << "/" << AdmDate.month << "/" << AdmDate.year
             << setw(10) << DisDate.date << "/" << DisDate.month << "/" << DisDate.year;
    }
};

class Derived : protected Hospital
{
    static int count;

public:
    int age;

    void GetAge()
    {
        getdata();
        cout << "\n Enter Age: ";
        cin >> age;
        count++;
        cout << "\n\n Patient Registered Successfully";
    }

    void ShowAge()
    {
        Display();
        cout << setw(10) << age;
    }

    int rcount()
    {
        return count;
    }
};

int Derived::count = 0;

int main()
{
    Derived d[100];
    int i = 0;
    int j = 0;
    char ch;

    do
    {
        i++;
        system("cls"); // Clear screen for Windows, or use "clear" for Linux/Mac
        d[i].GetAge();
        cout << "\nWant To Enter More (Y/N)? ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');

    system("cls");
    cout << "\n  \t\t\t All Patient List";
    cout << "\n\t\t\t-------------------";
    cout << "\n\n"
         << setw(5) << "Name"
         << setw(15) << "Disease"
         << setw(17) << "Admisssion"
         << setw(17) << "Discharge"
         << setw(13) << "Age";
    cout << "\n_";

    for (j = 1; j <= i; j++)
    {
        d[j].ShowAge();
    }

    cout << "\n\n__";
    cout << "\n\n\t\t\t Pediatric Patients ";
    cout << "\n\t\t\t-------------------";
    cout << "\n\n"
         << setw(5) << "Name" << setw(15) << "Disease" << setw(17)
         << "Admisssion" << setw(17) << "Discharge" << setw(13) << "Age";
    cout << "\n_";

    for (j = 1; j <= i; j++)
    {
        if (d[j].age < 12)
        {
            d[j].ShowAge();
        }
    }

    cout << "\n_";
    return 0;
}

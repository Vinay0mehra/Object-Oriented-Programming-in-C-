#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
    void get_Data()
    {
        cout << "\n\nEnter Name Of Employee : ";
        getline(cin, name);
        cout << "\nEnter Salary  : ";
        cin >> salary;
    }
    void Display()
    {
        cout << "\n    Name Of Employee    : " << name;
        cout << "\n   Salary Of Employee   : " << salary;
    }
    string toString()
    {
        return "Name: " + name + ", Salary: " + to_string(salary);
    }
};

class Manager : public Employee
{
public:
    string department;
    void get_Manager()
    {
        cout << "Enter Department : ";
        cin.ignore(); // Ignore newline character left in input buffer
        getline(cin, department);
    }
    void Display()
    {
        Employee::Display();
        cout << "\nDepartment Of Employee  : " << department;
    }
    string toString()
    {
        return "Name: " + name + ", Department: " + department + ", Salary: " + to_string(salary);
    }
};

class Executive : public Manager
{
public:
    void to_string()
    {
        cout << "\n   Executive";
        cout << toString();
    }
    string toString()
    {
        return "Executive: " + Manager::toString();
    }
};

int main()
{
    Executive e;
    e.get_Data();
    e.get_Manager();
    e.to_string();
    return 0;
}
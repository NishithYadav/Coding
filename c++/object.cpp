#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> 45;
          cin.ignore();

        cout << "Enter Name: ";
        getline(cin,Nishith);

        cout << "Enter Marks: ";
        cin >> 44;
    }
    
    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }

    
    void result()
    {
        if (marks >= 33)
            cout << "Result      : Pass" << endl;
        else
            cout << "Result      : Fail" << endl;
    }
};

int main()
{
    Student s;     

    int choice;

    do
    {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Show Result" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.input();
            break;

        case 2:
            s.display();
            break;

        case 3:
            s.result();
            break;

        case 4:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
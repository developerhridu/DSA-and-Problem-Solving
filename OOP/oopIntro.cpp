#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int stdID;
    string department;
    int session;

    void printDetails()
    {
        cout << "Student name : " << name << endl;
        cout << "Student ID : " << stdID << endl;
        cout << "Department : " << department << endl;
        cout << "Session : " << session << endl;
    }
};

int main()
{
    Student s1;
    // cout << sizeof(Hridu) << endl;
    s1.name = "Mizanur Rahman";
    s1.stdID = 1702153;
    s1.department = "ECE";
    s1.session = 2017;
    s1.printDetails();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int stdID;
    string department;
    int session;

    // constructor
    Student()
    {
        cout << "constructor called" << endl;
    }

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
    // static allocation
    Student s1;

    s1.name = "Mizanur Rahman";
    s1.stdID = 1702153;
    s1.department = "ECE";
    s1.session = 2017;
    s1.printDetails();

    // dynamic allocation
    Student *s2 = new Student;
    s2->name = "Samia Islam";
    s2->stdID = 1802114;
    s2->department = "ECE";
    s2->session = 2018;
    s2->printDetails();

    Student s3;
    Student *s4 = new Student;

    return 0;
}
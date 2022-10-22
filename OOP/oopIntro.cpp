#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int stdID;
    string department;
    int session;
};

int main()
{
    Student s1;
    // cout << sizeof(Hridu) << endl;
    s1.name = "Mizanur Rahman";
    s1.stdID = 1702153;
    s1.department = "ECE";
    cout << s1.name << " ";
    cout << s1.stdID << " ";
    cout << s1.department << endl;

    return 0;
}
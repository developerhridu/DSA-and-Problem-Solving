/* main reason why semi-colons is there at end of class is compiler checks if user is trying to create an instace of class at the end of it .

Yes just like structure , Union  we can also create the instance of class at the end just before the semicolon.*/

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    string department;
    int year;
    void printDetails()
    {
        cout << "Student name : " << name << endl;
        cout << "Student ID : " << id << endl;
        cout << "Department : " << department << endl;
        cout << "Session : " << year << endl;
    }
} s1; // object is created here.. not in the main function just like -- int num

int main()
{
    s1.name = "Mizanur Rahman Hridu";
    s1.id = 1702153;
    s1.printDetails();

    return 0;
}
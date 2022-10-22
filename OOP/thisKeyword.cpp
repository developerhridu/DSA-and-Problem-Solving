// understanding this key word

// this keyword is a pointer ja current obj er address ke store kore
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    // creating constructor
    Student()
    {
        cout << "this -> " << this << endl;
    }
};

int main()
{
    Student s1;
    cout << "Address of s1: " << &s1 << endl;
    Student s2;
    cout << "Address of s2: " << &s2 << endl;

    return 0;
}

/* output
this -> 0x16b3a3238
Address of s1: 0x16b3a3238
this -> 0x16b3a3230
Address of s2: 0x16b3a3230
*/

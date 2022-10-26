// Pointer store the address of a variable

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    // Pointer store the address of a variable
    int *ptr = &x; // ptr is a pointer to int value
    cout << "Number is: " << x << endl;

    // print address of x
    cout << "Address is: " << &x << endl;
    // print address of x
    cout << "Pointing to address: " << ptr << endl;
    // Print value of x
    cout << "Pointing to value: " << *ptr << endl;

    // here value is changed but address should stay same
    x = x + 10;
    cout << "Pointing to value: " << *ptr << endl;
    cout << "Pointing to address: " << ptr << endl;

    // Copying a pointer
    int *ptr2 = ptr;
    cout << ptr << " -- " << ptr2 << endl;
    cout << *ptr << " -- " << *ptr2 << endl;

    // increasing the pointer value.... pointing to next address which address is decleared ... means empty..
    ptr2 = ptr2 + 1;
    cout << ptr2 << endl;
    cout << *ptr2 << endl; // will print garbage value bcz it is not decleared

    return 0;
}

/*
Output:

Number is: 5
Address is: 0x16b54721c
Pointing to address: 0x16b54721c
Pointing to value: 5
Pointing to value: 15
Pointing to address: 0x16b54721c
0x16b54721c -- 0x16b54721c
15 -- 15
0x16b547220
1800696352

*/
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void update(int **p2, int *p)
{
   
    *p = *p + 1;
    cout <<"Inside function: "<< *p << endl;
    **p2 = **p2 + 4;
    cout <<"Inside function: "<< **p2 << endl;
    
}

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    // cout << i <<" "<< p << " "<< p2 << endl;
    // cout << i <<" "<< *p << " "<< **p2 << endl;
    // cout << &i <<" "<< p << " "<< *p2 << endl;
    // cout << i <<" "<< &p << " "<< p2 << endl;
    cout <<"Before: "<< *p << endl;
    cout <<"Before: "<< **p2 << endl;
    
    update(p2, p); 
    cout <<"After: "<< *p << endl;
    cout <<"After: "<< **p2 << endl;

    return 0;
}

// Before: 5
// Before: 5
// Inside function: 6
// Inside function: 10
// After: 10
// After: 10
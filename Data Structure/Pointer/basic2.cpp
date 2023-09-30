#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print(int* &x){
    cout << x << endl;
}

int main() {
    int x = 10;
    cout << x << endl;
    int* y = &x;
    cout << y << endl;
    cout << *&y << endl;
    
    int** z = &y;
    cout << z << endl;
    print(y);
    return 0;
}
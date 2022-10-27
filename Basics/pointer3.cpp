#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1,2, 3,4,5,6};
    
    // arr = arr + 1;
    
    int *ptr = &arr[0];
    
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}


// 0x7ffd01067070
// 0x7ffd01067074
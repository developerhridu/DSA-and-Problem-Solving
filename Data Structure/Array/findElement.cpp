#include <bits/stdc++.h>
using namespace std;

int positionOfElement(int arr[],int n, int key)
{
    
    for (int i = 0; i < n; ++i) {
        if(arr[i] == key)
            return i+1;
    }

return -1;
}

int main() {
    int arr[] = { 12, 34, 10, 6, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
 
    
    int key = 48;

    int pos = positionOfElement(arr,n, key);
    cout << pos << endl;
    return 0;
}
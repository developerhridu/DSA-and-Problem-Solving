#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7};

    // Address of First Memory block
    cout << "Address of First Memory block is " << arr << endl;
    // Address of First Memory block
    cout << "Address of First Memory block is " << &arr[0] << endl;

    // point to first element
    cout << *arr << endl;

    // point to 2nd element
    cout << *(arr + 1) << endl;

    // point to 3nd element
    cout << *(arr + 2) << endl;

    // point to 4th element
    cout << *(arr + 3) << endl;

    // so we can say,, arr[i] = *(arr + i) or i[arr] = *(i + arr)

    //*arr is point to first element which is 1 so 1 + 1 = 2
    // it won't print 2nd element
    cout << *arr + 1 << endl;

    cout << 3 [arr] << endl;

    return 0;
}

/*
Output:
Address of First Memory block is 0x7ffd154b6210
Address of First Memory block is 0x7ffd154b6210
1
2
3
4
2
4
*/
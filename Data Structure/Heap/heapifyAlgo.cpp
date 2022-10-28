#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = (2 * i) + 1;

    if(left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right < n && arr[largest] > arr[right])
    {
        largest = right;
    }


    // if largest != i it mean it largest variable is update so we need to take the pointer to current possiton
    if(largest != 0)
    {
        swap(arr[largest], arr[i]);

        // baki value gula check korbe 
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50}; 


    int n = 5;
    for(int i = n / 2; i >  0; i--)
    {
        heapify(arr, n, i);
    }

    //printing
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    } cout << endl;
    


return 0;
}
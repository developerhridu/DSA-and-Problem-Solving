#include <iostream>
using namespace std;
class Heap
{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;

    }

    void insert(int value);
    void print();
    void deleteFromHeap();
};

void Heap:: insert(int value)
{
    size = size + 1;

    //insert the value at the end
    int index = size;
    arr[index] = value;

    //Take value to it's currect position
    while (index > 1)
    {
        int parent = index / 2;

        if(arr[parent] < arr[index])
        {
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else
        {
            return;
        }
    }
}

void Heap:: deleteFromHeap()
{
    if(size == 0)
    {
        cout << "Heap is empty" << endl;
        return; 
    }

    //shifting first node to last node
    arr[1] = arr[size];

    //removing last element by decreasing the array size
    size--;

    //take root node to it's currect position
    int i = 1;
    while(i < size)
    {
        int leftIndex = 2 * i;
        int rightIndex = (2 * i) + 1;

        if(leftIndex < size && arr[i] < arr[leftIndex])
        {
            swap(arr[i], arr[leftIndex]);
            i = leftIndex;
        }
        else if(rightIndex < size && arr[i] < arr[rightIndex])
        {
            swap(arr[i], arr[rightIndex]);
            i = rightIndex;
        }
        else
            return;
    }

}

void Heap:: print()
{
    for(int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
    


return 0;
}
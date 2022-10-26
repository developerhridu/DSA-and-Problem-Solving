#include <bits/stdc++.h>
#include <assert.h>
using namespace std;
class Queue
{
public:
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    void push(int data);
    void pop();
    void print();
    void queueFront();

    ~Queue()
    {
        delete[] queue;
    }
};

void Queue::push(int data)
{
    if (capacity == rear)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else
    {
        queue[rear] = data;
        cout << data << " is push to queue" << endl;
        rear++;
    }
    return;
}

void Queue::pop()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < rear - 1; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
    return;
}

void Queue::print()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    for (int i = front; i < rear; i++)
    {
        cout << queue[i] << " ";
    }
}

void Queue::queueFront()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front is :" << queue[front] << endl;
    return;
}
int main()
{
    Queue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop(); // front element 1 will be popped
    q.queueFront();

    q.print();

    return 0;
}

/*
1 is push to queue
2 is push to queue
3 is push to queue
4 is push to queue
5 is push to queue
6 is push to queue
Front is :2
2 3 4 5 6
*/

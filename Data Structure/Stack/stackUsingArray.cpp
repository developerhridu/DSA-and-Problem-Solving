#include <bits/stdc++.h>
using namespace std;
#define MAX 10

class Stack
{
    int top;

public:
    int a[MAX];

    Stack()
    {
        // top is initialized to -1 meaning no elements are there yet
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
bool Stack ::push(int x)
{
    // cout << "Stack at " << top << endl;
    if (top >= (MAX - 1))
    {
        cout << "Stack is overflown" << endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " is pushed into stack" << endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.pop();

    cout
        << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        // print top element in stack
        cout << s.peek() << " ";
        // remove top element in stack
        s.pop();
    }

    return 0;
}
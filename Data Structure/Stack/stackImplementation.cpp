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
        top = -1;
    }

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    // void print(Stack s);
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "ERROR: Stack overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " is pushed onto stack" << endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "ERROR: Stack underflow";
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
        cout << "ERROR: Stack Empty";
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
    if (top < 0)
    {

        return true;
    }

    return false;
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.push(30);
    s.push(40);
    s.pop();
    s.push(50);
    cout << s.peek() << endl;

    // printing the element present in the stack
    cout << "Element present in the stack : ";
    while (!s.isEmpty())
    {
        cout << s.peek() << "  ";
        s.pop();
    }
    return 0;
}
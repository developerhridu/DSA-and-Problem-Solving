#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int data;
    Stack *next;
};
Stack *newNode(int data)
{
    Stack *stackNode = new Stack();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
int isEmpty(Stack *root)
{
    return !root;
}

void push(Stack **root, int data)
{
    Stack *nodeToInsert = newNode(data);
    nodeToInsert->next = *root;
    *root = nodeToInsert;
    cout << data << " is pushed onto stack" << endl;
}

int pop(Stack **root)
{
    if (isEmpty(*root))
    {
        cout << "stack is empty" << endl;
        return INT_MIN;
    }
    Stack *nodeToRemove = *root;
    *root = (*root)->next;
    int popped = nodeToRemove->data;
    free(nodeToRemove);
    // cout << popped << " is popped out from stack" << endl;
    return popped;
}

int peek(Stack *root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    Stack *root = NULL;
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    pop(&root);
    push(&root, 40);

    cout << "Top Element: " << peek(root)
         << endl;

    cout << "Elements in stack: ";
    while (!isEmpty(root))
    {
        cout << peek(root) << " ";
        pop(&root);
    }

    return 0;
}
// Output
// 10 is pushed onto stack
// 20 is pushed onto stack
// 30 is pushed onto stack
// 40 is pushed onto stack
// Top Element: 40
// Elements in stack: 40 20 10
// stack using linked list
// data insertion deletion occur at head of the linked list

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
    Stack *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout << data << "  is pushed to stack" << endl;
}

int pop(Stack **root)
{
    if (isEmpty(*root))
        return INT_MIN;

    Stack *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;

    free(temp);

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
    push(&root, 5);
    push(&root, 10);
    push(&root, 20);
    pop(&root);
    push(&root, 30);
    // cout << isEmpty(root) << endl;

    cout << "Top element is " << peek(root) << endl;

    cout << "Elements present in stack : ";
    // print all elements in stack :
    while (!isEmpty(root))
    {
        // print top element in stack
        cout << peek(root) << " ";
        // remove top element in stack
        pop(&root);
    }

    return 0;
}
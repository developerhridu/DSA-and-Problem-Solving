#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Node
{

public:
    int data;
    Node *next; // next element k point korse

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};



void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head; // New Temp Pointer

    while (temp != NULL)
    {
        cout << temp->data << " "; // current node print korse
        temp = temp->next;         // temp ke age bariye dicche
    }
    cout << endl;
}
int main() {
    Node *newNode = new Node(10);
    // Node *newNode2 = new Node(20);

    Node *head = newNode;
    Node *tail = newNode;

    print(head);
    
    return 0;
}
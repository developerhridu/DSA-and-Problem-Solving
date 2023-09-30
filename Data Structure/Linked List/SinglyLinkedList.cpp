#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Node
{

public:
    int data;
    Node* next; // next element k point korse

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

void insertAtTail(Node *&tail, int value){
    Node *temp = new Node(value);

    tail->next = temp;
    tail = temp;
}

void insertAtHead(Node *&head, int value){
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int pos, int value){
    if(pos == 1){
        insertAtHead(head, value);
        return;
    }
        
    Node *temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, value);
        return;
    }
        
    Node *newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;

}


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

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);

    cout << head->data << endl;
    cout << tail->data << endl;

    insertAtHead(head, 30);  
    insertAtHead(head, 5); 
    insertAtAnyPosition(head, tail, 3, 50); 
    insertAtAnyPosition(head, tail, 7, 100);
    // insertAtAnyPosition(head, tail, 7, 300);
    print(head);
    
    return 0;
}
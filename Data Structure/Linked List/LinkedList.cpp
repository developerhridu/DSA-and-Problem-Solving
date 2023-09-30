#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtTail(Node* tail, int data){
    Node *dataToInsert = new Node(data);
    tail->next = dataToInsert;
    tail = dataToInsert;
}

void printFullLinkedList(Node *head){
    if(head == NULL){
        cout << "Empty list" << endl;
        return;
    } 

    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;

}

int main() {
    Node* myNode = new Node(10);
    Node *head = myNode;
    Node *tail = myNode;
    // cout << myNode << endl;
    // cout << myNode->data << endl;
    // cout << myNode->next << endl;
    // cout << head << endl;
    // cout << tail->data << endl;


    i
    printFullLinkedList(head);
    
    return 0;
}
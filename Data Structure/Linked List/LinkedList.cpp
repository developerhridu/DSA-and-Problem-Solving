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

void insertAtTail(Node* &tail, int data){
    Node *dataToInsert = new Node(data);
    tail->next = dataToInsert;
    tail = dataToInsert;
}

void insertAtHead(Node* &head, int data){
    Node *dataToInsert = new Node(data);
    dataToInsert->next = head;
    head = dataToInsert;
}

void insertAtAnyPosition(Node* &head, int data, int position){
    if(position < 0){
        cout << "Invalid position " << position << endl;
        return;
    }
    else if(position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    

    int cnt = 1;
    while(cnt < position - 1){
        if(temp->next == NULL){
            insertAtTail(temp, data);
            break;
            return;
        }
        temp = temp->next;
        cnt++;
    }

    Node * nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

    insertAtTail(tail, 30);

    // insertAtHead(head, 20);
    // insertAtAnyPosition(head, 5, 2);
    insertAtAnyPosition(head, 500, 6);


    printFullLinkedList(head);
    
    return 0;
}
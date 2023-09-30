#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void printFullList(){
    
}

int main() {
    Node *myNode = new Node(10);
    Node *head = myNode;
    Node *tail = myNode;
    cout << myNode << endl;
    cout << &myNode->data << endl;
    cout << &myNode->next << endl;
    cout << head << endl;
    cout << tail->data << endl;

    
    return 0;
}
#include <iostream>

class Node {
private:
    int data;
    Node* next;

public:
    Node(int data) : data(data), next(nullptr) {}

    int getData() const { return data; }
    Node* getNext() const { return next; }
    void setNext(Node* node) { next = node; }

    ~Node() {
        std::cout << "Memory is free for node with data " << data << std::endl;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->setNext(newNode);
            tail = newNode;
        }
    }

    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->setNext(head);
        head = newNode;
        if (tail == nullptr) {
            tail = newNode;
        }
    }

    void insertAtAnyPosition(int pos, int value) {
        if (pos <= 0) {
            std::cerr << "Invalid position." << std::endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(value);
            return;
        }

        Node* temp = head;
        int cnt = 1;
        while (temp != nullptr && cnt < pos - 1) {
            temp = temp->getNext();
            cnt++;
        }

        if (temp == nullptr) {
            std::cerr << "Position out of bounds." << std::endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->setNext(temp->getNext());
        temp->setNext(newNode);
        if (newNode->getNext() == nullptr) {
            tail = newNode;
        }
    }

    void print() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->getData() << " ";
            temp = temp->getNext();
        }
        std::cout << std::endl;
    }

    // ~LinkedList() {
    //     Node* temp = head;
    //     while (temp != nullptr) {
    //         Node* toDelete = temp;
    //         temp = temp->getNext();
    //         delete toDelete;
    //     }
    // }
};

int main() {
    LinkedList myList;

    myList.insertAtTail(10);
    myList.insertAtTail(20);
    myList.insertAtTail(30);
    myList.insertAtHead(5);
    myList.insertAtHead(30);
    myList.insertAtAnyPosition(3, 50);
    myList.insertAtAnyPosition(7, 100);

    myList.print();

    return 0;
}

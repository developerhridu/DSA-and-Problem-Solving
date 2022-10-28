#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d)
    {
        this-> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
    
};

Node* insert(Node* root, int d)
{
    //base case: 
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root -> data) 
    {
        root -> right = insert(root-> right, d);
    }
    else
    {
        root -> left = insert(root-> left, d); 
    }
    return root;

}
void inorder(Node* &root)
{
    cout<<"inorder";
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}



void takeInput(Node* &root)
{
    int data;
    cin >> data;

    // take input as long input data is not -1
    while(data != -1)
    {
        insert(root, data);
        cin >> data;
    }

}




int main() {

    Node* root = NULL;

    cout << "Enter Data For BST: " <<endl;
    takeInput(root);
    inorder(root);
    

    return 0;
}
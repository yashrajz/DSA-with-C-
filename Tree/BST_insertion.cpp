#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insert(Node* root, int d){
    //base condition
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    //insert into right
    if(d > root->data){
        root->right = insert(root->right, d);
    }
    else{
        //insert into left
        root->left = insert(root->left, d);
    }
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insert(root, data);
        cin >> data;
    }
}

void inorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main(){

    Node* root = NULL;
    
    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    cout << "Printing In-Order traversal: " << endl;
    inorder(root);

    return 0;
}
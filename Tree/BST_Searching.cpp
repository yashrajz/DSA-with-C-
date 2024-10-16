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

Node* insert(Node* &root, int d){
    if(root == NULL){       //base condition
        root = new Node(d);
        return root;
    }
    if(root->data > d){ //inserting in left.
        root->left = insert(root->left, d);
    }
    else{               //inserting in right
        root->right = insert(root->right, d);
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

bool searching(Node* root, int key){
    //base condition
    if(root->data != key){
        cout << "Key Element not found!" << endl;
        return false;
    }
    if(root->data == key){
        cout << "Key Found!";
        return true;
    }

    if(root->data > key){
        return searching(root->left, key);
    }
    if(root->data < key){
        return searching(root->right, key);
    }

}


int main(){

    Node* root = NULL;

    cout << "Enter data to enter in BST: " << endl;
    takeInput(root);

    int key;
    cin >> key;

    searching(root, key);

    return 0;
}



#include <iostream>
using namespace std;

class Node{

    public: 
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL; 
    }
};

//function to build tree with recursion.
Node* buildTree(Node* root){
    
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root =  new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}



int main(){
    
    Node* root = NULL;

    //creating a tree
    root = buildTree(root);


    return 0;
}
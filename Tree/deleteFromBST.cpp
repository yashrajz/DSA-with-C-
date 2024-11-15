#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }

};

Node* insert(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insert(root->right, data);
    }
    else{
        root->left = insert(root->left, data);
    }
    return root;

}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insert(root, data);
        cin >> data;
    }
}

Node* deleteFromBST(Node* &root, int val){
    //base case
    if(root==NULL){
        return root;
    }

    if(root->data == val){
        // 0 child

        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child

        // left child
        if(root -> left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root -> right != NULL && root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root -> right != NULL && root->left != NULL){
            int mini = minVal(root-right)-> data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }


    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }


}
Node* minVal(Node* &root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

int main(){

    Node* root = NULL;
    int val;
    cin>> val;

    takeInput(root);
    deleteFromBST(root, val);
}
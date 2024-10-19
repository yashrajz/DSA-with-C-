#include <iostream>
using namespace std;

class Node {
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


Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;

}

int minElement(Node* root) {
    Node* current = root;

    // loop down to find the leftmost leaf
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current->data;
}

int main() {
    Node* root = NULL;
    int n;
    cin >> n;
    
    int data;
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }
 int minValue = minElement(root);
    cout << "The minimum value in the BST is: " << minValue;

    return 0;
}
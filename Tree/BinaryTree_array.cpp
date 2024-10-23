#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildTree(int arr[],int n,int i){
    if(i >= n){
        return NULL;
    }
    
    node* root = new node(arr[i]);
    
    root -> left = buildTree(arr,n,2*i+1);
    root -> right = buildTree(arr,n,2*i+2);
    return root;
}
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}
int main(){
    node* root = NULL;
    int data;
    int arr[100];
    int n = 0;
    while(true){
        cin >> data;
        if(data <= 0){
            break;
        }
        arr[n] = data;
        n++;
    }
    
    root = buildTree(arr,n,0);
    
    inorder(root);
}
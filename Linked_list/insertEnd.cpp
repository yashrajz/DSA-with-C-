#include <iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};


void insertAtEnd(Node* &head, int d){
    //creating new node.
    Node* newNode = new Node(d);
    
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;

        
        while(temp -> next != NULL){
            temp = temp -> next;
        } 
        temp -> next = newNode;
    }

}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
}


int main(){

    Node* head = NULL;

    int num;

    while(true){

        cin >> num;
        
        if(num < 0){
            break;
        }

        else{
            insertAtEnd(head, num);
        }
    
    }
    print(head);



    return 0;
}
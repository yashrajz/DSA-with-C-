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

void InsertionAtAnyPosition(Node* &head, int d, int pos){
    Node* newNode = new Node(d); 

    if (pos == 1) { 
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head; // traverse to the node at position 'pos-1'
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) { // if the position is greater than the length of the list
        cout << "Position out of range" << endl;
        return;
    }

    newNode->next = temp->next; // insert the new node at position 'pos'
    temp->next = newNode;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
}

int main(){


    int n1, n2, n3, n4, n5; 
    cin >> n1, n2, n3, n4, n5;
    
    Node* node1 = new Node(n1);
    Node* head = node1;
    Node* node2 = new Node(n2);
    Node* node3 = new Node(n3);
    Node* node4 = new Node(n4);
    Node* node5 = new Node(n5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    print(head);





    return 0;
}
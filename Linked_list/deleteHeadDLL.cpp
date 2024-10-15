#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        data = d;
        prev = next = NULL;
    }
};

Node* delHead(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* temp = head; 
    head = head->next; 

    if (head != NULL) {
        head->prev = NULL;
    }

    delete temp; 
    return head; 
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head = delHead(head); 
    printList(head); 

    return 0;
}

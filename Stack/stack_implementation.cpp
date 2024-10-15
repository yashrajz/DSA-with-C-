#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push function
    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow." << endl;
        }
    }

    // Pop function
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    // Peek function
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty." << endl;
            return -1; 
        }
    }

    // Empty checking
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << "Top element: " << st.peek() << endl;
    st.pop();

    return 0;
}

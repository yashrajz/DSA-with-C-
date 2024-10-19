#include <iostream>
using namespace std;

class queue{

    int n;
    int* arr;
    int start;
    int end;

    public:
    //constructor
    queue(){
        n = 10001; // big value
        arr = new int[n];
        start = 0;
        end = 0;
    }

    bool isEmpty(){
        if(start == end){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data){         //adding element in queue
        if(end == n){              // rear is equal to size, i.e it's full
            cout << "Queue is Full." << endl;
        }
        arr[end] = data;
        end++;

    }

    int dequeue(){
        if(start == end){          //front = rear means both at starting point.
            cout << "Queue is empty." << endl;
            return -1;
        }
        else{
            int ans = arr[start];
            arr[start] = -1;
            start++;
            if(start == end) {
                start = 0;
                end = 0;
            }
        return ans;
        }

    }

    int front(){
        if(start == end){
            return -1;
        }
        else{
            return arr[start];
        }

    }
};
int main(){
    queue q;

    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(54);
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    q.front();
    q.enqueue(22);
    q.enqueue(56);
    q.enqueue(89);
    
}
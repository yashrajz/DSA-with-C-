#include <iostream>
using namespace std;

class Queue{
    int n;
    int* arr;
    int start;
    int end;

    public:
    //constructor
    Queue(int data){
        n = 1000;
        arr = new int[n];
        start = -1;
        end = -1;

    }
};
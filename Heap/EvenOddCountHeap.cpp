#include <iostream>
using namespace std;

//To find parent index.
int parent(int i){
    return (i - 1)/2;
}
//Hepify function for Max Heap
void maxHeapify(int arr[], int n, int i) {
    
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr,n,largest);
    }
    
}
// To build heap using Heapify function
void buildMaxHeap(int arr[], int n) {
    for(int i = n/2-1; i >= 0; i--){
        maxHeapify(arr,n,i);
    }
}

//To Insert new element in heap.
void heapifyup(int arr[], int n){
    int index = n - 1;
    while(index > 0 && arr[index] > arr[parent(index)]){
        swap(arr[index], arr[parent(index)]);
        index = parent(index);
    }
}
void insertIntoMaxHeap(int arr[], int &n, int value, int &evenCount, int &oddCount) {
    //Type your code here
    if(n == 100){   // max value of n
        return;
    }
    arr[n] = value; // assigning value to the last element
    n++;
    heapifyup(arr,n);
    
    evenCount = 0;
    oddCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    
    
}
void printMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        
    }
    cout << endl;
}
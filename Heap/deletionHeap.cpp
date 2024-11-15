#include <iostream>
using namespace std;

class heap{
    public:
        int size;
        int arr[100];

        //constructor
        heap(){
            arr[0] = -1;
            size = 0;
        }

        //Function to insert..
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }

        //Function to delete..
        void deleteFromHeap(){
            if(size == 0){
                cout << "Nothing to delete" << endl;
                return;
            }

            // step1: put the last element into 1st place
            arr[1] = arr[size];
            size--;        //remove last element

            int i = 1; 
            while(i < size){
                int left = 2*i;
                int right = 2*i+1;

                if(left < size && arr[i] < arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else if(right < size && arr[i] < arr[right]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else{
                    return;
                }
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();

}


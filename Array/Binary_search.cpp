#include <iostream>
using namespace std;


int binarySearch(int n, int arr[], int key){
    int first = 0; 
    int last = n-1;
    

    while(first <= last){
        int mid = (first + last) / 2 ;

        if(arr[mid] == key){

            return mid;
        }
        else if( arr[mid] > key){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return -1;
}


int main(){
    int n;
    cin >> n;
    int arr[n];

    //Inserting elements in an array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int result = binarySearch(n, arr, key);

    if (result != -1) {
        cout << "Element found at: " << result + 1<< endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;

}
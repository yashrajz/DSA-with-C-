#include <iostream>
using namespace std;

int main(){
    
    int n; 
    cin >> n;

    int key;
    cin >> key;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }
    
    bool found = false;
    for(int i = 0; i < n; i++){
        if(key == arr[i]){
            cout << "Found at position: " << i+1;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Not Found!";
    }
    
}
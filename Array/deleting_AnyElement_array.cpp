#include <iostream>
using namespace std;

int main(){
    
    int n; 
    cin >> n;

    int pos;
    cin >> pos; //1-based index
    
    int arr[n];
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }
    
    for(int i = pos - 1; i < n; i++){
        
        arr[i] = arr[i+1]; 
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}
#include <iostream>
using namespace std;

int f_occur(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int first_occ = -1;
    
    while(s <= e){
       int  mid = s + (e - s) / 2;
        
        if(arr[mid] == key){
            first_occ = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return first_occ;
}

int l_occur(int arr[], int n, int key){
    
    int s = 0;
    int e = n - 1;
    int last_occ = -1;
    
    while(s <= e){
        int mid = s + (e - s)/2;
        
        if(arr[mid] == key){
            last_occ = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return last_occ;

}

int main(){
    int n; 
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    
    int res1 = f_occur(arr, n, key);
    int res2 = l_occur(arr, n, key);
    
    
    if(res1 != -1){
        cout << "The first occurrence of " << key << " is at index " << res1 << endl;
        cout << "The last occurrence of " << key <<" is at index " << res2 << endl;
        
    }
    else{
        cout << "Target value " << key << " is not found in the array";
    }
    
    
}

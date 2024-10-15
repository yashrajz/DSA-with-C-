#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int value;
    cin >> value;

    int arr[n];

    for(int i = 0; i < n; i++){

        cin >> arr[i] ;
    }

    n++;

    arr[n-1] = value;

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }

}
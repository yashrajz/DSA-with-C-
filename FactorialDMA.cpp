#include <iostream>
using namespace std;

int main(){

    int *n = new int;
    cout << "Enter the value of num to find factorial: " << endl;
    cin >> *n ;

    int fact  = 1;
    if( *n != 0 )
    for(int i = 0; i < *n; i++){
        fact = (*n) * fact;
    }





    return 0;
}
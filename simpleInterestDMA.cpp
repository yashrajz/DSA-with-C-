#include <iostream>
using namespace std;

int main(){

    float *p = new float;
    float *r = new float;
    float *t = new float;
    float *si = new float;

    if(p == NULL || r == NULL || t == NULL || si == NULL){
        cout << "Memory Allocation Failed!" << endl;
    }
    else{
        cout << "Memory Allocation Suceccfull!" << endl;
        cout << "Enter the value of p, r and t" << endl;
        cin >> *p >> *r >> *t ;
        
        *si = (*p) * (*r) * (*t) * 0.01 ;
        cout << *si << endl;
    }








    return 0;
}
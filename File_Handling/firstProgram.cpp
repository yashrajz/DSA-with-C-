#include <iostream>
#include <fstream>
using namespace std;

int main() {

    char s[10];
    ofstream fileout;
    ifstream filein;

    fileout.open("data", ios::app);
    fileout << "Hello World !";
    fileout.close();
    
    filein.open("data", ios:: in);
    filein.getline(s, 30);
    cout <<s; 
    
    // ofstream of("File1.txt");
    // of << "Hello!.... How are You? \n I'm worried about you, please be safe.";
    // of.close();
    // return 0;
}
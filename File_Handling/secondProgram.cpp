#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class student{
    char name[50];
    int rollno;
    float marks;

    public:
    void getinfo(){
        cout << "Enter name: " << endl;
        gets(name);
        cout << "Enter rollno: " << endl;
        cin >> rollno;
        cout << "Enter marks: " << endl;
        cin >> marks;

    }

    void putinfo(){
        cout << "Name: " << name << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){

    student s1, s2;
    s1.getinfo();
    s1.putinfo();
    fstream fobj;
    fobj.open("nn.txt", ios::out | ios::binary);
    fobj.write((char*)&s1, sizeof(s1));
    fobj.close();
    fobj.open("nn.txt", ios::in | ios::binary);
    fobj.read((char*)&s2, sizeof(s2));
    s2.putinfo();
    fobj.close();

    return 0;
}
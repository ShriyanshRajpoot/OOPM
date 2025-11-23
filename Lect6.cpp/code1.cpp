#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int roll, marks;
    public:
    Student(string s, int r,int m){
        name = s;
        roll = r;
        marks = m;
    }
    void display(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Marks is : "<<marks<<endl;
        cout<<"Roll is : "<<roll<<endl;
    }
};
 int main(){
    Student S1("Saini",21,19);
    S1.display();
 }
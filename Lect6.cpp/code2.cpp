#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    string name;
    int accNo, balance = 0;
    public:

    BankAccount(string s, int a){
        name = s;
        accNo = a; 
    }

void deposit(int d){
    balance = balance+ d;
}

void displayBalance(){
    cout<<"balance is : "<<balance<<endl;
    cout<<"name is : "<<name<<endl;
    cout<<"account number : "<<accNo<<endl;

}
void withdraw(int w){
    if(balance<w){
        cout<<"Insufficient Balance"<<endl;
        
}
    else{
        balance = balance-w;
    }
     
}
};

 int main(){
    BankAccount B1("Akash", 202);
    B1.deposit(1000);
    BankAccount B2("Yash", 303);
    B2.deposit(500);
    B1.withdraw(1500);
    B1.displayBalance();

 }

// to swap two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    a=10;
    b=14;

    cout<<"please enter the value of a and b";
    cin>>a>>b;

    cout<<"before swapping are a="<<a<<" b="<<b;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter swapping are a="<<a<<" b="<<b;

    return 0;
}
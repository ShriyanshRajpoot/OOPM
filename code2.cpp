#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10,temp;
    cout<<"\nvalues before swapping are a="<<a<<" b="<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nvalues after swapping are a="<<a<<" b="<<b;
    return 0;
}
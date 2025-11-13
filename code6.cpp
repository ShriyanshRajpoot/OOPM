#include<iostream>
using namespace std;
int main()
{
    int code=000,in;
    cout<<"Please enter the code to open the Door Lock";
    cin>>in;
    if(code==in)
    cout<<"Door Is Open";
    else
    cout<<"Wrong Code";
    return 0;
}
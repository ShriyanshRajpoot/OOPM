// CLASS

#include<iostream>
using namespace std;
class MyClass {  // the class
    public:      // access specifier
      MyClass(){ // constructor
        cout<< "Hello World !";
      }
  };
  int main()  {
    MyClass myObj;
    return 0;
  }
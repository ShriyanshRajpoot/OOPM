#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    int length, breadth;
    string area;
    string perimeter;
    public:
    Rectangle(int l ,int b){
        length = l;
        breadth = b;
    }
    void Area(){
        cout<<"area is : "<<length*breadth<<endl;
    }
    void Perimeter(){
        cout<<"perimeter is : "<<2*(length+breadth)<<endl;
    }
    void isSquare() {
        if (length == breadth)
            cout << "It is a square." << endl;
        else
            cout << "It is not a square." << endl;
    }
};

int main() {
    Rectangle r1(5, 5);
    r1.Area();
    r1.Perimeter();
    r1.isSquare();

    return 0;
}


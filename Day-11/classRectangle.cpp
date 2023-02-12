#include <iostream>
#include <string>
using namespace std;

class Rectangle{
public:
    int length;  //only variables will consume the size of memory not function
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1,r2; //object created in stack
    r1.length = 19;
    r1.breadth = 5;
    cout<<"Area is: "<< r1.area() <<endl;
    cout<<"Perimeter is: "<< r1.perimeter() <<endl;

    r2.length= 8;
    r2.breadth = 7;
    cout<<"Area is: "<< r2.area() <<endl;
    cout<<"Perimeter is: "<< r2.perimeter() <<endl;
}
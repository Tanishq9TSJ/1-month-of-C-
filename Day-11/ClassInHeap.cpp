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
    Rectangle *p;
    p = new Rectangle;  //creates object in heap

    Rectangle *q = new Rectangle();  //create object in heap
    q->length = 4;
    q->breadth = 9;
    cout<<q->area()<<endl;
    cout<<q->perimeter()<<endl;
    return 0;
}
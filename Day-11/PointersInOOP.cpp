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
    Rectangle r;
    Rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 5;
    cout<<p->area()<<endl;
}
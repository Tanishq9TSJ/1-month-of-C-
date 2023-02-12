#include <iostream>
#include <string>
using namespace std;

class Rectangle{
private:
    int length;  //only variables will consume the size of memory not function
    int breadth;

    /*Accessor - getxxx() functions
      Mutator - setxxx() functions*/
public:
    void setlength(int l){  
        if(l>=0){length = l;}
        else{length = 0;}
    }

    void setbreadth(int b){
        if(b>=0){breadth = b;}
        else{breadth = 0;}
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    r.setlength(10);
    r.setbreadth(7);

    cout<<"Length is: "<<r.getLength()<<endl;
    cout<<"Breadth is: "<<r.getBreadth()<<endl;

    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    return 0;
}
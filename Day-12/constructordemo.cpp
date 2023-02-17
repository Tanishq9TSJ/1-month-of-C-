#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(){  //Default constructor
        length = 0;
        breadth = 0;  
    }
    Rectangle(int l=0,int b=0){  //parametrized constructor
        setlength(l);
        setbreadth(b);
    }

    Rectangle(Rectangle &r){  //copy constructor
        length = r.length;
        breadth = r.breadth;
    }

    //these 3 are together are overloading constructor

    void setlength(int l){  
        if(l>=0){length = l;}
        else{length = 0;}
    }

    void setbreadth(int b){
        if(b>=0){breadth = b;}
        else{breadth = 0;}
    }
};
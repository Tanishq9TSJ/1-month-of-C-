#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    string name;
    
    void printname(){
        cout<<"Your name is: "<<name;
    }
};

int main(){
    person p1;
    p1.name = "Tanishq";
    p1.printname();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int id;

    void printname();

    void printid(){
        cout<<"Your id is: "<<id<<endl;
    }
};

//defintion of printname using scope resolution operator
void Person::printname(){
    cout<<"Your name is: "<<name<<endl;
}

int main(){
    Person p1;
    p1.name = "Tanishq";
    p1.id = 66;
    p1.printname();
    p1.printid();

    Person p2;
    p2.name = "Anuj";
    p2.id = 34;
    p2.printname();
    p2.printid();

    return 0;
}
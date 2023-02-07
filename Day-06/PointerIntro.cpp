#include <iostream>
using namespace std;

int main(){
    int x=10;
    int *p;  //Declaration
    p = &x;  //Initialization

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl; //Deferencing
    return 0;
}
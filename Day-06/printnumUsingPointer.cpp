//Write a program to print a number which is entered from keyboard using pointer.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    cout<<*(&x)<<endl;
    return 0;
}
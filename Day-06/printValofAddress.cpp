//Write a program to print the value of the address of the pointer to a variable whose value is input from user.

#include <iostream>
using namespace std;

int main(){
    int x;
    int *ptr = &x;
    cout <<"Enter a number: ";
    cin >> x; 
    cout<<"Value of address of pointer of "<<x<<" is "<< &ptr;
    return 0;
}
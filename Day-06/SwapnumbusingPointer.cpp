#include <iostream>
using namespace std;

int main(){
    int num1,num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout<<"\nEnter the first number : ";
    cin>>num1;
    cout<<"\nEnter the Second number : ";
    cin>>num2;

    //swapping using pointer
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    //sum of two numbers using pointer
    int sum;
    sum = *ptr1 + *ptr2;

    cout<<"\nFirst number : "<< num1;
    cout<<"\nSecond number: "<<num2<<endl;
    cout<<"Summation: "<<sum;
    return 0;

}
#include <iostream>
using namespace std;

int main(){
    /*1.p++;
      2.p--;
      3.p=p+2;
      4.p-2;
      5=d=q-p (sub 2 pointers)*/
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<p[-4]; 
}
#include <iostream>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};  //array is in stack
    int *p;  
    p = new int[5];  //memory allocated in heap
    cout<<&p;
    //always deallocate mem from heap
    delete []p;
    p = NULL;
}
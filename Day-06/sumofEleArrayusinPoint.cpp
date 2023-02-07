#include <iostream>
using namespace std;

int main(){
    int A[5],i,sum=0;
    int *ptr;

    cout<<"Enter the 5 elements: ";
    for(i=0;i<5;i++){
        cin>>A[i];
    }

    ptr = A;
    for(i=0;i<5;i++){
        sum = sum + *(ptr+i);
    }

    cout << "\nSum of array elements :" << sum;
    return 0;
}
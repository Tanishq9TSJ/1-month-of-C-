#include <iostream>
using namespace std;

int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int Length = sizeof(A) / sizeof(int);
    int sum = 0;

    for(int x:A)
    {
        sum +=x;
    }
    cout<<"Sum of elements in an array: "<<sum;
    return 0;
}
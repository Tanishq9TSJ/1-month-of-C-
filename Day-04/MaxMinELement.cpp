#include <iostream>
using namespace std;

int main()
{
    int A[7] = {4,8,6,9,2,7,3};
    int Length = sizeof(A) / sizeof(int);
    int max = A[0],min = A[0];

    for(int i = 0;i<=Length;i++)
    {
        if(A[i]> max)
        {
            max=A[i];
        }
    }
    for(int i = 0;i<=Length;i++)
    {       
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    cout <<"Maximum element: "<<max<<endl;
    cout <<"Minimum element: "<<min<<endl;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //DECLARATION
    const int CAPACITY = 10;
    int A[CAPACITY];
    int size,countpos = 0,countneg = 0;

    //ENTERING THE SIZE OF ARRAY
    do{
        cout<<"Enter the size of array(1 to 10): ";
        cin >> size;
    }while(size < 1 || size > CAPACITY);

    //ENTERING THE ELEMENTS IN ARRAY
    cout<<endl<<"Enter the elements in array: ";
    for(int i=0;i<size;i++)
    {
        cin >> A[i];
    }

    //TRAVERSING THE ARRAY
    cout<<"Your array: ";
    for(int i = 0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }

    //COUNTING THE NO. OF POSITIVE AND NEGATIVE ELEMENTS IN ARRAY
    for(int x:A)
    {
        if(x>0){
            countpos++;
        }
        else if(x<0){
            countneg++;
        }
    }

    cout<<"Positive elements: "<<countpos<<endl;
    cout<<"Negative elements: "<<countneg<<endl;
    return 0;
}
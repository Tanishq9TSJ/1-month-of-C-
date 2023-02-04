#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //DECLARATION
    const int CAPACITY = 10;
    int A[CAPACITY];
    int size;
    int key,posi;

    //ENTERING THE SIZE OF ARRAY
    do{
        cout<<"Enter the size of array(1 to 10): ";
        cin >> size;
    }while(size < 1 || size > CAPACITY);

    //ENTERING THE ELEMENTS IN ARRAY
    cout<<endl<<"Enter the elements in array in sorted manner : ";
    for(int i=0;i<size;i++)
    {
        cin >> A[i];
    }

    //Checking if elements in the array are sorted;
    for(int i=0;i<size;i++)
    {
        if(A[i]>A[i++]) 
        {
            cout << "Elements are not sorted!"<<endl;
            return 0;
        }  
    }

    //TRAVERSING THE ARRAY
    cout<<"Your array: ";
    for(int i = 0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }

    //TRAVERSING THE ARRAY IN REVERSE ORDER
    cout<<endl<<"Your array in reverse order: ";
    for(int i = size-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    //BINARY SEARCH
    int l=0,h=size;
    int mid;
    cout<<endl<<"Enter the element you want to search: ";
    cin >> key;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == A[mid]){
            cout<<"Element is at position "<< mid+1;
            return 0;
        }
        else if(key < A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<"Not found";
    return 0;
}
#include <iostream>
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
    cout<<endl<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin >> A[i];
    }
    
    //LINEAR SEARCH
    cout<<endl<<"Enter the element you want to search: ";
    cin >> key;
    for(int i=0;i<size;i++)
    {
        if(key==A[i])
        {
            posi = i+1;
            cout<<endl<<"Position of the element "<<key<<" is: "<<posi<<endl;
        }
        return -1;
    }
    
}
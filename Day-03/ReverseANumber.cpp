#include <iostream>
using namespace std;

int main()
{
    int n,temp,rem,rev=0;
    cout <<"Enter the number: ";
    cin >> n;
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        temp = temp/10;
        rev = rev*10 + rem;
    }
    cout<<"Reverse number is: "<<rev<<endl;

    if(n==rev)
    {
        cout <<"Number is palindrome";
    }
    else
    {
        cout<<"Number is not a palindrome";
    }
    return 0;
}
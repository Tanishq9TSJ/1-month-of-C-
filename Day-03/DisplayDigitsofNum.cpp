#include <iostream>
using namespace std;

int main()
{
    int n,rem,dig;
    cout <<"Enter the number: ";
    cin >> n;
    while(n>0)
    {
        rem = n%10;
        cout<<rem<<endl;
        n = n/10;
    }
    return 0;
}
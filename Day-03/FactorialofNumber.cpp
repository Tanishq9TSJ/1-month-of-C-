#include <iostream>
using namespace std;

int main()
{
    int n,i,fact = 1;
    cout <<"Enter the number: ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial is "<<n<<" is "<<fact;
    return 0;
}
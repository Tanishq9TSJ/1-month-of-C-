#include <iostream>
using namespace std;

int main()
{
    int m,n;
    int dif = m-n;
    cout <<"Enter the numbers: ";
    cin >> m >> n;
    while(m !=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
    }
    cout <<"GCD is "<<m;
    return 0;
}
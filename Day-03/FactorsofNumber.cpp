#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout <<"Enter the number: ";
    cin >> n;

    cout <<"Factors of a number: \n";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            sum = sum+i;
        }
    }
    cout <<"Sum of "<<n<<" factors is "<<sum;
    return 0;
}
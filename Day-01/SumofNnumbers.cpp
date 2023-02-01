#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;

    int s = n*(n+1)/2;
    cout <<"Sum of "<<n<<" natural number is: "<< s;
    return 0;
}
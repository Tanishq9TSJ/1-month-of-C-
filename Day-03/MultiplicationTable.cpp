#include <iostream>
using namespace std;

int main()

{
    int n,i;
    cout <<"Enter the number: ";
    cin >> n;

    for(i=1; i<11; i++)
    {
        cout << n << " x " <<i<<" = "<<n*i<<endl;
    }
    return 0;
}
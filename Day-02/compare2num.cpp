#include <iostream>
using namespace std;

int main()
{
    int x,y;

    cout << "Enter first no.: ";
    cin >> x;

    cout << "Enter second no.: ";
    cin >> y;

    if(x>y){ cout << x <<" is greater"; }
    else{ cout << y <<" is greater"; }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int s,p,r,t;

    cout << "Enter the principle amount: "; cin >> p;
    cout << "Enter the rate: "; cin >> r;
    cout << "Enter the number of years: "; cin >> t;

    s = (p*r*t)/100;

    cout <<"Simple Interest is: " <<s;
    return 0;
}
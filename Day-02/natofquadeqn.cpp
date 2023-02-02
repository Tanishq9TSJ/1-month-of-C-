#include <iostream>
#include <cmath>
using namespace std;

typedef int coef;

int main()
{
    coef a,b,c;
    int d = sqrt(pow(b,2) - 4*a*c);

    cout <<"Enter the coefficients of the quadratic equation: ";
    cin >> a >> b >> c;

    if(d == 0)
    {
        cout << "Real and equal";
    }
    else if(d > 0)
    {
        cout << "Real and unequal";
    }
    else
    {
        cout <<"Imaginary";
    }
    return 0;
}
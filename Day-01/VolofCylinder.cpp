#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float V,r,h;

    cout <<"Enter the radius of cylinder: "; cin >> r;
    cout <<"Enter the height of cylinder: "; cin >> h;

    V = M_PI*(pow(r,2)*h);
    cout <<"Volume of the cylinder: " << V;
    return 0;
}
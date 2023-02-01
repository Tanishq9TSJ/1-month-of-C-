#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the coefficients of quadratic equation: ";
    cin >> a >> b >> c;

    int x1, x2;
    int root = pow(b,2) - 4*a*c;
    x1 = (-b + sqrt(root))/2*a;

    x2 = (-b - sqrt(root))/2*a;

    cout << "Roots of the quadratic equation are: " << x1 << " and " << x2;
    return 0;
}
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2,dist;

    cout << "Enter the coordinates of first object: "; cin >> x1 >> y1;
    cout << "Enter the coordinates of second object: "; cin >> x2 >> y2;
    dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    cout << "Distance between the two object is: " << dist;
    return 0;
}
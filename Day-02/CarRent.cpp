/*Assume a car rental company defines the minimum and maximum age to rent a car to be 25
and 100, respectively. Program 4.7 shows how a person’s age can be tested using a simple
decision-making code.*/
#include <iostream>
using namespace std;

typedef int age;
int main()
{
    age x;
    cout << "Enter your age: "; cin >> x;
    if(x >= 25 && x <= 100){ cout << "Age is legal for renting car"; }
    else{ cout << "Not legal for renting car"; }
    return 0;
}
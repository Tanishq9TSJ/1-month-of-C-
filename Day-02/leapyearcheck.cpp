/*In our current calendar, the month of February has 28 days instead of 29. To check for a
leap year, we need to check three conditions. If a year is divisible by 400, it is definitely a
leap year. Otherwise, if the year is divisible by 4, but not by 100, it is also a leap year.*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout <<"Enter the year: "; cin >> year;
    if( year%400==0 || (year%4==0 && year%100 != 0))
    {
        cout <<"Leap year";
    }
    else{
        cout <<"Normal year";
    }
    return 0;
}
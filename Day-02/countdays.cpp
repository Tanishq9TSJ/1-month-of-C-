/*Finding the number of days passed from the beginning of 
the year including the current day*/
#include <iostream>
using namespace std;

typedef int month;

int main()
{
    int mon,day;
    int totaldays = 0;
    cout <<"Enter the month number: "; cin >> mon;
    cout <<"Enter the days of month: "; cin >> day;

    month m1 = 31;
    month m2 = 28;
    month m3 = 31;
    month m4 = 30;
    month m5 = 31;
    month m6 = 30;
    month m7 = 31;
    month m8 = 31;
    month m9 = 30;
    month m10 = 31;
    month m11 = 30;
    month m12 = 31;

    switch(mon){
        case 12: totaldays += m11;
        case 11: totaldays += m10;
        case 10: totaldays += m9;
        case 9: totaldays += m8;
        case 8: totaldays += m7;
        case 7: totaldays += m6;
        case 6: totaldays += m5;
        case 5: totaldays += m4;
        case 4: totaldays += m3;
        case 3: totaldays += m2;
        case 2: totaldays += m1;
        case 1: totaldays += 0;
    }
    totaldays += day;
    cout <<"Total no. of days: "<<totaldays<<endl;
    return 0;
}
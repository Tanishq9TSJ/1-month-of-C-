#include <iostream>
using namespace std;

class Time
{
private:
   int hour;
   int minute;
   int second;
public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    
    void GetTime()
    {
        cout<<"Time in hr:mm:ss "; 
        cin >> hour >> minute >> second;
    }
    
    void displayTime()
    {
        cout<<"Time: "<<hour<<":"<<minute<<":"<<second<<endl;
    }
    
    int addTime(Time T1, Time T2)
    {
        this->second=T1.second+T2.second;
        this->minute=T1.minute+T2.minute + this->second/60;
        this->hour= T1.hour+T2.hour + this->minute/60;
        this->minute %=60;
        this->second %=60;
    }
};


int main()
{
    Time t1(11,59,55);
    Time t2(0,0,5);
    Time t3(0,0,0);
    
    t3.addTime(t1,t2);
    t3.displayTime();
    return 0;
}
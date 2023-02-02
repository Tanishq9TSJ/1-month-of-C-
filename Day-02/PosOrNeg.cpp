#include <iostream>
using namespace std;

typedef int comp;

int main()
{
    comp x;
    cout <<"Enter the no.: "; cin >> x;

    if(x > 0){ cout <<"POSITIVE" << endl;}
    else if(x < 0){cout <<"NEGATIVE" << endl;}
    else{ cout <<"Enter a valid number!" << endl; }
    
    if(x%2 == 0){cout <<"Even" << endl;}
    else{ cout <<"Odd" << endl;}
    return 0;
}
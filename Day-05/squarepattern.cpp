#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count=1;
    for(int i = 1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<setw(4)<<count<<setw(4);
            count++;
        }
        cout<<endl;
    }
    return 0;
}
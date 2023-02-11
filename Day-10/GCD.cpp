#include <iostream>
using namespace std;

int GCD(int x, int y){
    while(x != y){
        if(x>y){
            x = x-y;
        }
        else{
            y=y-x;
        }
    }
    return x;
}

int main(){
    int a, b;

    cout<<"Enter the numbers: ";
    cin >> a >> b;

    cout<<GCD(a,b)<<endl;
    return 0;
}
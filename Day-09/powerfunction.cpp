#include <iostream>
using namespace std;

int power(int a, int b){
    int c = a;
    while(b > 1){
        c = c*a;
        b--;
    }
    return c;
}

int main(){
    int z = power(5,5);
    cout<<"z is: "<<z<<endl;
    return 0;
}
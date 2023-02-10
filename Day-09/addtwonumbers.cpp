#include <iostream>
using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int x = 19;
    int y = 90;
    int z = add(x,y);
    cout<<"Summation is: "<<z<<endl;
    return 0;
}
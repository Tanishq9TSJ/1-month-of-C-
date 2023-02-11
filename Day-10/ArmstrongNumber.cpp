#include <iostream>
#include <cmath>
using namespace std;

void Armstrong(int x){
    int i, arm = 0,temp, rem;
    temp = x;
    while(x != 0){
        rem = x%10;
        arm = arm + pow(rem, 3);
        x = x/10;
    }
    if(temp == arm){
        cout<<"Armstrong";
    }else{
        cout<<"not an armstrong";
    }
}
int main(){
    Armstrong(153);
    return 0;
}
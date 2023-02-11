#include <iostream>
using namespace std;

int perfect(int x){
    int i,sum=0;
    //Finding factor
    for(i = 1;i<=x;i++){
        if(x%i ==0){
            sum+=i;
        }
    }

    if(sum == 2*x){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin >> a;

    if(perfect(a) == 1){
        cout<<"Number is perfect";
    }
    else{
        cout<<"Number is not perfect";
    }
    return 0;
}
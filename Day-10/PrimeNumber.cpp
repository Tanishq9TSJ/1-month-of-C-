#include <iostream>
using namespace std;

void Prime(int x){

    if(x == 1){
        cout<<"Not a prime";
    }
    int i;
    int count = 0;

    for(i = 1; i <= x; i++){
        if(x%i == 0){
            count=count+1;
        }
    }
    if(count == 2){
        cout<<"Number is prime";
    }
    else{
        cout<<"Not a prime";
    }
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin >> a;

    Prime(a);
    return 0;
}
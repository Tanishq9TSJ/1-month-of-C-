#include <iostream>
using namespace std;

void binary(int n){
    int bin[100];
    int i = 0;
    while(n > 0){
        bin[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        cout<<bin[j];
    }
}

int main(){
    int a = 13;
    binary(a);
    return 0;
}
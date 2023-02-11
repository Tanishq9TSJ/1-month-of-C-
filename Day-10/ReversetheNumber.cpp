#include <iostream>
using namespace std;

int Reverse(int *n){
    int i, rem, rev = 0;
    while(*n != 0){
        rem = *n%10;
        rev = rev*10 + rem;
        *n = *n/10;
    }
    return rev;
}
int main(){
    int a = 8431;
    cout<<Reverse(&a);
    return 0;
}
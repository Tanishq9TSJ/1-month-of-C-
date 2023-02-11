#include <iostream>
using namespace std;

int fibonacci(int n){
    /*int fib, fib1 = 0, fib2 = 1; 
    if(n <= 1){ return n;}
    for(int i = 1   ; i<= n; i++){
        fib = fib2 + fib1;
        fib1 = fib2;
        fib2 = fib;
    }
    return n;*/
    if(n<=1){
        return n;
    }else{
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main(){
    int n = 10, i;
    for(i=0;i<n;i++){
       cout<<fibonacci(i)<<" ";
    }
    return 0;
}
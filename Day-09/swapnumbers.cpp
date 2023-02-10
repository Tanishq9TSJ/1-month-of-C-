#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;
}

int main(){
    int x = 10, y = 15;
    swap(&x,&y);
    return 0;
}
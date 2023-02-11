#include <iostream>
using namespace std;

int max(int x, int y){
    return x>y?x:y;
}

int min(int x,int y){
    return x<y?x:y;
}

int main(){
    int (*fp)(int, int);
    fp = max;
    cout<<"Maximum: "<< (*fp)(10,5)<<endl;

    fp = min;
    cout<<"Minimum: "<<(*fp)(10,5)<<endl;
    return 0;
}
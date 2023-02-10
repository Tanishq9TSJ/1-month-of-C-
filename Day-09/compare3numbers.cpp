#include <iostream>
using namespace std;

int compare(int x, int y, int z){
    if(x>y && x>z){
        return x;
    }else if(y>x && y>z){
        return y;
    }else{
        return z;
    }
}

int main(){
    int a = 16;
    int b = 9;
    int c = 12;

    int ans = compare(a,b,c);

    cout<<"Biggest number: "<<ans<<endl;
    return 0;
}
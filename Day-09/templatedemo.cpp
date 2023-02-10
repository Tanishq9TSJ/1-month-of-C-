#include <iostream>
using namespace std;

template<class T>
T maxim(T x, T y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main(){
    cout<<maxim(17,23)<<endl;
    cout<<maxim(6.8f,1.4f)<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int bigger(int a, int b){
    int temp;
    if(a>b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}
int main(){
    int x = 15,y = 10,z;
    z=bigger(x,y);
    cout<<"Here, "<<z<<" is bigger"<<endl;
    return 0;

}
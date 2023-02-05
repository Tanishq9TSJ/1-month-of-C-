#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int sum = 0,avg;
    int A[9] = {1,2,3,4,5,6,7,8,9};

    for(auto& x:A){
        sum+=x;
    }
    avg=sum/9;
    cout<<"Average of elements in array: "<<avg;
    return 0;

}
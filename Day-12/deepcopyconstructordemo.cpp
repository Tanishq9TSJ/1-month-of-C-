#include <iostream>
using namespace std;

class Test{
    int a;
    int *p;

    Test(int x){
        a=x;
        p=new int[a];
    }
    

    //deep copy constructor
    Test(Test &t){
        a = t.a;
        p = new int[a];
    }
};
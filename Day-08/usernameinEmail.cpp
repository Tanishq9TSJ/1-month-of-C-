#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="abcd24@gmail.com";
    int i=(int)str.find('@');

    string username = str.substr(0,i);
    cout<<"Username: "<<username<<endl;
    return 0;
}
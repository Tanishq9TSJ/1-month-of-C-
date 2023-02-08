#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="Namaste";
    int count = 0;

    for(int i = 0;s[i] != '\0'; i++){
        count++;
    }
    cout<<"Lenght of string is: "<<count<<endl;
    return 0;
}
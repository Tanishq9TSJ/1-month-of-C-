#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="Hello World";
    
    //lowercase to uppercase
    for(int i = 0; s[i] != '\0';i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32; //converts uppercase to lowercase
        }else if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32; //converts lowercase to uppercase
        }
    }
    cout<<s;
}
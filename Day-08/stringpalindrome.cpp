#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="Madam";
    string rev;
    int len=(int)s.length();

    rev.resize(len);

    for(int i = 0,j=len-1;i<len;i++,j--){
        rev[i] = s[j];
    }
    rev[len]='\0';

    if(s.compare(rev)==0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
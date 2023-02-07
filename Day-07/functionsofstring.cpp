#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main(){
    char s1[50],s2[50];

    cout<<"Enter string: ";
    cin.getline(s1,100);
    cout<<"Length: "<<strlen(s1)<<endl;  //strlen() tells length of string

    //strcat(destination,source) concatenates two string
    cout<<"Enter string: ";
    cin.getline(s2,100);

    strcat(s1,s2);
    //strncat(destination,source, no. of letters to be concatenate)
    cout<<s1<<endl;
   
    //strcpy(destination,source), copies whole string
    char a1[20]="good";
    char a2[20]="";
    
    //strncpy(destination,source, no. of letters to be copied)
    cout<<s1<<endl;
    strcpy(a2,a1);
    cout<<a1<<endl<<a2;

    //strstr(main,sub)  //starts string from that occurence
    char b1[20] = "Programming";
    char b2[20] = "ming";

    cout<<strstr(b1,b2)<<endl;
     return 0;
}
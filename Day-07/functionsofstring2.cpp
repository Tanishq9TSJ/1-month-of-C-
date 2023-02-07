#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main(){
    char s1[20] = "Programming";

    //strchr() calls string from that char 
    cout<<strchr(s1,'m')<<endl;
    //strrchr() calls string from that char from the most right side
    cout<<strrchr(s1,'m')<<endl;

    //strcmp(str1,str2)-->compares two strings and returns +ve,0 or -ve, it depends on ASCII Codes
    char str1[20] = "good";
    char str2[20] = "Good";

    cout<<strcmp(str1,str2)<<endl;

    //strtol(String,NULL)-->Converts string to long integer value
    //strtof(string,NULL)-->Converts string to float value

    long int x = strtol(str1,NULL,4);
    float y = strtof(str1,NULL);
    cout<<x<<endl<<y<<endl;

    //strtok(str1,"=;") tokenizes string like x=10;y=20;z-35;
    char c[20] = "x=10;y=20;z=35";
    char *token = strtok(c,"=;");

    while(token != NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}
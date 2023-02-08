#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "How many words";
    int vowel = 0;
    int consonent = 0;
    int words = 0;

    for(int i = 0; s[i] != '\0';i++){
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u'){
            vowel++;
        }
        else if(s[i]==' '){
            words++;
        }
        else{
            consonent++;
        }
    }

    cout<<"Vowels: "<<vowel<<endl;
    cout<<"Consonents: "<<consonent<<endl;
    cout<<"Words: "<<words+1<<endl;
    return 0;
}
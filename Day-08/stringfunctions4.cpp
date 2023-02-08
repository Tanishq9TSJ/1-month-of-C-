#include <iostream>
#include <string>
using namespace std;

int main(){
    //s.copy(char des[], length of string) - copies string in a char array
    string s="welcome";
    char str[10];
    s.copy(str, s.length());
    cout<<str<<endl;

    //s.rcopy(char des[], length of string) - same like copy() but from reverse

    //s.find(str) - finds string str in string s and returns index value

    //s.rfind(str) -  finds string str in string s in reverse order and returns index value

    //s.find_first_of() - finds cha in string from lhs

    //s.find_last_of() - finds cha in string from rhs

    //s.substr(start, number) - subtracts string from the given range

    //s.compare(str) - compare two strings and returns 1,0,-1

    //s.at(char to be search) - gives index of the given char in the string

    //s.front() - returns first letter of string
    
    //s.last() = returns last letter of string

}
#include <iostream>
#include <string>
using namespace std;

int main(){
    //append() --> joins two string
    string str = "Hello ";
    cout<<str.capacity()<<endl;

    str.append("How are you?");
    cout<<str.capacity()<<" "<<str.length()<<endl;

    cout<<str<<endl;

    //insert(index no, string to be inserted)- inserts string at a given index
    str.insert(3,"kkk");
    cout<<str<<endl;
    
    //replace(index no,str char to be replace, string to be replaced)
    str.replace(3, 4, "ll");
    cout<<str<<endl;

    //erase() - clears entire string

    //push_back("char") - inserts char at the end of the string

    //pop_back() - deletes char at the end of string

    //str1.swap(str2) - swaps string 1 with string 2
    return 0;

}
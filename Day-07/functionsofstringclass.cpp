#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string s1 = "Tanishq";

    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl;  //shows capacity of string
    s1.resize(30);  //changes capacity 15-->30
    cout<<s1.max_size()<<endl;
    s1.clear();  //clears whole string
    if(s1.empty()){
        cout<<"Empty";
    }else{
        cout<<"String is "<<s1<<endl;
    }
}
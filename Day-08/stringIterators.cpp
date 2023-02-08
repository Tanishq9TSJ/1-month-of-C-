#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        *it = *it-32;
    }
    cout<<str<<endl;

    //begin()
    //end()


    //reverse_iterator()
    //rbegin()
    //rend()

    //reversing the string
    string::reverse_iterator rit;
    for(rit=str.rbegin();rit!=str.rend();rit++){
        cout<<*rit;
    }
    cout<<endl;

}
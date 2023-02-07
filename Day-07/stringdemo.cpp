#include <iostream>
using namespace std;

int main(){
    //using array
    char s[10] = "Hello";
    cout<<s<<endl;
    
    char a[10] = {'H','e','l','l','o'};
    cout<<a<<endl;

    char n[20];
    cout<<"enter your name: ";
    cin.getline(n,50); //will take whole sentence 

    //cin.get(string, 100)--->cin.ignore()

    cout<<n<<endl;
}
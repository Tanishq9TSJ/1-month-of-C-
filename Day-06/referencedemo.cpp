#include <iostream>
using namespace std;

int main(){
    //reference->nickname for variables
    //referred mvar doesn't contain memory
    int x=10;
    int &y=x;
   //now you cannot create another reference for x, only one
    cout <<x <<"  "<<y<<endl;

    x++;
    cout <<x <<"  "<<y<<endl;

    y++;
    cout <<x <<"  "<<y<<endl;
}
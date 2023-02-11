#include <iostream>
using namespace std;

int linearSearch(int A[], int key, int n){
    for(int i = 0; i < n; i++){
        if(key == A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int key;
    int A[] = {2,4,6,7,9,3,1};
    cout<<"Enter the element: ";
    cin >> key;

    int ans = linearSearch(A,key,7);
    cout<<"The element is at index: "<<ans<<endl;
    return 0;
}
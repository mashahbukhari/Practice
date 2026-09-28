#include <iostream>

using namespace std;

struct deletion{
    int A[10];
    int size=10;
    int length=0;
};


int main() {

    deletion a;

    cout<<"length:";
    cin>>a.length;

    cout<<"Enter elements: ";

    for(int i=0;i<a.length;i++){
        cin>>a.A[i];
    }

    int index;
    cout<<"Index:";
    cin>>index;

    // int value;
    // cout<<"Value:";
    // cin>>value;

    for(int i=index-1;i<a.length-1;i++){
        a.A[i]=a.A[i+1];
    }

    a.length--;

    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }


    
    return 0;
}
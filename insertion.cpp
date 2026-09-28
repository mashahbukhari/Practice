
#include <iostream>

using namespace std;

struct insert{
    int A[10];
    int size=10;
    int length=0;
};

int main() {

    insert a;
    
    cout<<"length:";
    cin>>a.length;

    for(int i=0;i<a.length;i++){
        cin>>a.A[i];
    }

    int index;
    cout<<"Index:";
    cin>>index;

    int value;
    cout<<"Value:";
    cin>>value;

    for(int i=a.length-1;i>=index;i--){
        a.A[i+1]=a.A[i];
    }

    a.A[index]=value;

    a.length++;

    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }


    return 0;
}
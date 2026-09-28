#include <iostream>

using namespace std;

int search(int a[],int v){
    for(int i=0;i<5;i++){
        if(a[i]==v){
            return i;
        }
    }
    return 0;
}

int main() {

    int a[5]={1,2,3,4,5};

    cout<<search(a,4);
    
    return 0;
}
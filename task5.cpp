#include <iostream>

using namespace std;

int main() {
    
    int *a[3];

    for(int j=0;j<3;j++){
        a[j]=new int[3];
    }


    

    for(int i=0;i<3;i++){
        cout<<"Enter elements for "<<i+1<<" array in heap: "; 
        for(int j=0;j<3;j++)
        cin>>*(a[i]+j);

    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<*(a[i]+j)<<" ";
        }
    }

    return 0;
}
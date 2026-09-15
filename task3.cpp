#include<iostream>
using namespace std;

// void even(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<(arr+i)<<endl;
//     }
// }

int main(){
    int *a=new int[5]{1,2,3,4,5};
    int *q=new int[10];
    
    for(int i=0;i<5;i++){
        q[i]=a[i];

    }

    // for(int i=5-1;i<10;i++){
    //     q[i]=2;
    // }

    delete[]a;
    a=q;
    q=nullptr;

    for (int i =0; i< 10; i++){
        cout<<a[i]<<" ";
    }
   
    return 0;
}
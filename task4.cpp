#include <iostream>

using namespace std;

void isprime(int a[],int size){

    cout<<"Enter elements for array: ";

    for(int k=0;k<size;k++){
        cin>>a[k];
    }
    bool prime=true;

    for(int i=0;i<size;i++){

        if(a[i]<=1){
            prime=false;
        }

        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                prime=false;
                break;
            }
        }

        if(prime){
            cout<<a[i]<<" is prime "<<endl;
        }
        else{
            cout<<a[i]<<" is not prime"<<endl;
            prime=true;
        }
    }
}

int main() {
    

    
    int n;

    cout<<"Enter number: "<<endl;
    cin>>n;

    int a[n];


    isprime(a,n);
    

    return 0;
}
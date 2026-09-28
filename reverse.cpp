#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    
    char a[]={'a','m','s','t','i','\0'};
    
    cout<<"Before reversing string"<<endl;
    cout<<a<<endl;

    int size=sizeof(a)-1;
    int j=size-1;

    for(int i=0;i<j;i++){
        swap(a[i],a[j]);
        j--;
    }

    cout<<"After reversing string"<<endl;
    cout<<a;



    
    return 0;
}
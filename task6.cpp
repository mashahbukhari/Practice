#include <iostream>

using namespace std;

struct arr{
    int *a;
    int size=0;
    int len=0;
};

int main() {

    cout<<"Enter the index you wanted to delete: ";
    int index;
    cin>>index;

    arr obj;
    obj.a=new int[10];

    obj.size=10;
    obj.len=5;




    
    return 0;
}
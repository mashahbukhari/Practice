#include <iostream>
#include<cctype>


using namespace std;

int main() {
    
    string s="Ac3?e3c&a";
    

    string n_s="";

    // for(char& c:s){
    //     c=tolower(c);
    // }

    int st=0;
    int e=s.length()-1;

    while(st<e){
        s=tolower(s[st]);
        st++;
    }



    for(char& c:s){
        if(isalnum(c)){
            n_s+=c;
        }
    }

    int end=n_s.length()-1;
    int check=n_s.length()/2;
    int count=0;

    for(int i=0;i<end;i++){
        if(n_s[i]==n_s[end]){
            end--;
            count++;
        }
        else{
            cout<<"Not palindrom "<<endl;
            break;
        }
    }

    if(count==check){
        cout<<"palindrom"<<endl;
    }


    return 0;
}
#include <iostream>

using namespace std;

int main() {
    string s = "daabcbaabcbc";
    string part="abc";


    int count;

    int start=0;

    while(start<=s.length()-part.length()){
        count=0;
        if((s[start]==part[0]) && (s[start+1]==part[1]) && (s[start+2]==part[2])){
                    count+=1;
                }
        if (count==1){
            s=s.erase(start,part.length());
            start=0;
        }
        start++;    
    }

    cout<<s;
    return 0;
}
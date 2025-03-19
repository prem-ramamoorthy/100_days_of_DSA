#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int count = 0;
    string s ;
    for(int i = 0 ; i < haystack.size() ; i++){
        count++;
        s = s + haystack[i] ;
        if(count==needle.size() ){
            if(s == needle){
                return i-needle.size()+1 ;
            }
            else{
                count = 0 ;
                s = "";
            }
        } 
    }
return -1 ;
}

int main() {
    string s = "sadbutsad";
    string n = "sad" ;
    cout<<strStr(s,n);
    return 0;
}
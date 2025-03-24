#include <bits/stdc++.h>
using namespace std;

int first_unique_char(string s){
    map<char , int > hash ;
    for(int i = 0 ; i<s.size() ; i++ ){
        hash[s[i]]++;
    }
    for(int i = 0 ; i<s.size() ; i++){
        if(hash[s[i]]==1) {
            return i ;
        }
    }
    return -1 ;
}

int main() {
    string s ;
    cin>>s ;
    cout<<first_unique_char(s)<<endl ;
    return 0;
}
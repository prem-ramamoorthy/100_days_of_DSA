#include<bits/stdc++.h>
using namespace std ;

int countConsistentStrings(string allowed, vector<string>& words) {
    int result = 0 ;
    for (string i : words) {
        set<char> unique (i.begin() , i.end() );
        bool valid = true ;
        for(char c : unique){
            if(allowed.find(c) == -1){
                valid= false ;
            }
        }
        if(valid){
            result++;
        }
    }
    return result ;
}

int main(){
    string allowed = "ab" ;
    vector<string> words = {"ad","bd","aaab","baa","badab"} ;
    cout<<countConsistentStrings(allowed, words) ;
    return 0 ;
}
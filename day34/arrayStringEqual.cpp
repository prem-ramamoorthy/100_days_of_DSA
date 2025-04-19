#include<bits/stdc++.h>
using namespace std ;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string checker = "" ;
    for(string i : word2){
        for(char j : i ){
            checker+=j ;
        }
    }
    string instance = "" ;
    for(string i : word1){
        for(char j : i ){
            instance+=j ;
        }
    }
    return checker==instance ;
}

int main(){
    vector<string> word1 = {"ab", "c"} ;
    vector<string> word2 = {"a", "bc"} ;
    cout<<arrayStringsAreEqual(word1 , word2) ;
    return 0 ;
}
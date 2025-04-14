#include <bits/stdc++.h>
using namespace std;

int findPermutationDifference(string s, string t) {
    map<char,int> hash ;
    for(int i = 0 ; i<t.size() ; i++){
        hash[t[i]] = i ;
    }
    int result = 0 ;
    for(int i = 0 ; i <s.size() ; i++){
        result+= abs(i-hash[s[i]]); 
    }
    return result ;
}

int main() {
    cout<<findPermutationDifference("abcde" , "edbac") <<endl ;
    return 0;
}
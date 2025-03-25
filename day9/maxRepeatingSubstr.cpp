#include <bits/stdc++.h>
using namespace std;

int MaxRepSubstr(string seq , string word) { 
    int c = 0 ; 
    string s = word ;
    while(seq.find(s)!=-1){
        c++ ;
        s += word ; 
    }
    return c ;
}

int main() {
    string seq = "ababc" , word = "ab" ;
    cout << MaxRepSubstr(seq , word) << endl ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string zigzag(string s , int n ) {
    int len = s.size() ;
    int inc = (n-1) * 2 ;
    string res ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < len ; j+=inc){
            res+=s[j] ;
            if(i>0 && i<n-1 && j+inc-2*i < len ) {
                res += s[j+inc-2*i] ;
            }
        }
    }
    return res ;
}

int main() {
    string s = "PAYPALISHIRING" ;
    int n = 3 ;
    cout<<zigzag(s, n) ;
    return 0;
}
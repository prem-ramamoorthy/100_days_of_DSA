#include <bits/stdc++.h>
using namespace std;

string maximumOddBinaryNumber(string s) {
    int count1 = count(s.begin() , s.end() , '1') ;
    int count0 = s.size() - count1 ;
    if(count1 == 0){
        return "" ;
    }
    string result(count1-1 , '1');
    result+=string(count0,'0');
    result+='1' ;
    return result ;
}

int main() {
    string s = "1100101";
    cout << maximumOddBinaryNumber(s) << endl; 
    return 0;
}
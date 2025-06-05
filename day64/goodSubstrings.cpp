#include<bits/stdc++.h>
using namespace std;

int countGoodSubstrings(string s) {
        int result = 0 ; 
        int n = s.size() ;
        for(int i = 0 ; i < n ; i ++ ){
            if (i+2 < n ){
                map<char,int> hash ;
                for(int j = 0 ; j < 3 ; j++){
                    hash[s[i+j]]++ ;
                }
                if(hash.size() == 3){
                    result++;
                }
            }
        }
        return result ;
    }

int main() {
    string s = "xyzzaz"; 
    int result = countGoodSubstrings(s);
    cout << result << endl; 
    return 0;
}
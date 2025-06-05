#include<bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s) {
        map<char,int> hash ; 
        for(auto i : s){
            hash[i]++ ;
        }
        int n = -1 ;
        for(auto i : hash){
            if(n == -1){
                n = i.second ;
            }
            else {
                if(n!=i.second){
                    return false ;
                }
            }
        }
        return true ;
    }

int main() {
    string s = "abacbc"; 
    bool result = areOccurrencesEqual(s);
    cout << (result ? "True" : "False") << endl; 
    return 0;
}
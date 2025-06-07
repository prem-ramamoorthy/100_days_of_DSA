#include<bits/stdc++.h>
using namespace std;

int minTimeToType(string word) {
        int result = 0 ;
        int pointer = 'a' ;
        for(char i : word ){
            int curr = abs(i - pointer ) ;
            result += min((26-curr) , curr ) ;
            result++ ;
            pointer = i ;
        }
        return result ;
    }

int main() {
    string word = "abcde";
    cout << minTimeToType(word) << endl;
    return 0;
}
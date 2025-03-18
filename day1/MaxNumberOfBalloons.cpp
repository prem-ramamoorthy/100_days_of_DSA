#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {
    int n = text.size() ;
    int hash[26] = {0};

    for(int i = 0 ; i< n ; i++){
        char c = text[i];
        hash[c-'a']++;
    }
    
    return min({hash['b'-'a'], hash['a'-'a'], hash['l'-'a'] / 2, hash['o'-'a'] / 2, hash['n'-'a']});
}

int main() {
    string s = "basilodjlodshoshn";
    cout<<maxNumberOfBalloons(s);
    return 0;
}
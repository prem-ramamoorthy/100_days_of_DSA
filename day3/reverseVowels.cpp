#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s){
    vector<int> place ;
    vector<char> contains ;
    string vowels = "aAeEiIoOuU";
    for(int i = 0 ; i < s.size() ; i++){
        if(vowels.find(s[i]) != -1 ){
            place.push_back(i);
            contains.push_back(s[i]);
        }
    }
    reverse(contains.begin() , contains.end());
    for(int i = 0 ; i < contains.size() ; i ++){
        s[place[i]] = contains[i] ; 
    }
    return s ;
}

int main() {
    string s = "IceCreAm" ;
    cout << reverseVowels(s) ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int morsecode(vector<string> words ){
    unordered_map<char, string> morse = {
        {'a', ".-"},{'b', "-..."},{'c', "-.-."},{'d', "-.."}, {'e', "."},    
        {'f', "..-."}, {'g', "--."},{'h', "...."},{'i', ".."},{'j', ".---"}, 
        {'k', "-.-"},{'l', ".-.."},{'m', "--"},{'n', "-."},{'o', "---"},  
        {'p', ".--."},{'q', "--.-"},{'r', ".-."},{'s', "..."},{'t', "-"},    
        {'u', "..-"},{'v', "...-"},{'w', ".--"},{'x', "-..-"},{'y', "-.--"}, 
        {'z', "--.."}
    };
    set<string> s ;
    for(string word : words){
        string temp ;
        for(char c : word){
            temp+=morse[c] ;
        }
        s.insert(temp);
    }
    return s.size() ;
}

int main() {
    vector<string> words = {"gin","zen","gig","msg"} ;
    int result = morsecode(words) ;
    cout<<result<<endl ;
    return 0;
}
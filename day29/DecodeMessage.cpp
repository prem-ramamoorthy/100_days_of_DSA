#include <bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message) {
    map<char,char> hash ;
    char c = 'a' ;
    for(int i = 0 ; i<key.size() ; i++ ){
        if(key[i] != ' ' && hash.find(key[i]) == hash.end()){
            hash[key[i]] = c ;
            c++ ;
        }
    }
    string result = "" ;
    for(char i: message){
        if(i == ' '){
            result+=' ';
        }
        else{
            result+=hash[i] ;
        }
        
    }
    return result ;
}

int main() {
    cout<<decodeMessage("the quick brown fox jumps over the lazy dog" , "vkbs bs t suepuv");
    return 0;
}
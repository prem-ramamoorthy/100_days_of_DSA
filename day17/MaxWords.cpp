#include <bits/stdc++.h>
using namespace std;

string maxwords(vector<string> banned , string paragraph){
    vector<string> ubanned ;
    for(auto i : banned) {
        string temp1 = "" ;
        for(char j : i) {
            temp1+=tolower(j) ;
        }
        ubanned.push_back(temp1) ;
    }
    map<string , int > hash ;
    string result = "" ;
    string temp = "" ;
    for(char c : paragraph) {
        if(isalpha(c)){
            temp+=tolower(c) ;
        }
        else{
            if(!temp.empty()){
                bool valid = true ;
                for(string word : ubanned){
                    if(word == temp){
                        valid = false ;
                    }
                }
                if(valid == true){
                    hash[temp]++;
                }
                temp = "";
            }
        }
    }
    if(!temp.empty()){
        if(!temp.empty()){
            bool valid = true ;
            for(string word : ubanned){
                if(word == temp){
                    valid = false ;
                    temp = "";
                }
            }
            if(valid == true){
                hash[temp]++;
            }
        }
    }
    int count = 0 ;
    for(auto i : hash){
        if(i.second>count){
            result = i.first ;
            count = i.second ;
        }
    }
    return result ;
}

int main() {
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit." ;
    vector<string> banned = {"hit"} ;
    cout<<maxwords(banned , paragraph ) ;
    return 0;
}
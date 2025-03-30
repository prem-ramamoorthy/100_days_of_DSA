#include <bits/stdc++.h>
using namespace std;

void backtrack(int itr , string cur ,string digits,map<char,string>container ,vector<string>&result){
    if(cur.size()==digits.size()){
        result.push_back(cur) ;
    }
    for(auto i: container[digits[itr]]){
        backtrack(itr+1 , cur+i , digits , container , result ); 
    }
}

vector<string> CombinationOfPhoneNumber(string digits) {
    map<char,string> container = {
        {'0', " "}, {'1', ""}, {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    }; 
    vector<string> result ;
    string cur = "" ;
    if(digits.size()>1){
        backtrack(0 , cur, digits , container , result) ;
        return result ;
    } 
    return {} ;

}

int main(){
    string digits = "23" ;
    vector<string> result = CombinationOfPhoneNumber(digits) ;
    for(auto i : result ){
        cout<<i<<endl ;
    }
    return 0 ;
}
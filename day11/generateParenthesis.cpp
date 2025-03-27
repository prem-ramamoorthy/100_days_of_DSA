#include <bits/stdc++.h>
using namespace std;

void backtrack(string &current ,vector<string> &result, int open , int close , int n) {
    if(open == n && open == close ){
        result.push_back(current) ;
        return ;
    }
    if(open < n){
        current.push_back('(');
        backtrack(current ,result,open + 1 ,close ,n) ;
        current.pop_back() ;
    }
    if(close < open){
        current.push_back(')');
        backtrack(current ,result,open ,close + 1 ,n) ;
        current.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result ; 
    string current ;
    
    backtrack(current , result , 0, 0 , n );
    return result ;
}


int main() {
    int n ;
    cin>>n ;
    vector<string> result =  generateParenthesis( n) ;
    for (const auto &i : result ){
        cout<<i<<"--> ";
    }
    cout<<endl ; 
    return 0;
}
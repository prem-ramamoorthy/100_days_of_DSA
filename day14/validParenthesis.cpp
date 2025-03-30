#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string s) {
    vector<char> stack ;
    map<char,char> closeopen = {
        {']' ,'['} , {'}' ,'{'} , {')' ,'('}
    } ;
    for(auto i : s) {
        if(closeopen.count(i)>0){
            if(stack.size()>0 && stack.back() == closeopen[i] ){
                stack.pop_back() ;
            }
        }
        else{
            stack.push_back(i) ;
        }
    }
    return stack.size()==0 ;
}

int main() {
    cout<<validParenthesis("([])") <<endl ;
    cout<<validParenthesis("([)]") <<endl ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void backtrack(int itr , vector<int> cur ,int k , vector<int> nums ,vector<vector<int>>&result){
    if(cur.size()== k){
        result.push_back(cur) ;
        return ;
    }
    if(itr>=nums.size()) {
        return ;
    }
    cur.push_back(nums[itr]);
    backtrack(itr+1 , cur, k ,nums , result) ;
    cur.pop_back() ;
    backtrack(itr+1 , cur , k , nums , result ) ;
    return ;
}

vector<vector<int>> combinations(int n , int k) {
    vector<vector<int>> result ;
    int itr = 0 ;
    vector<int> cur ;
    vector<int> nums ;
    for(int i= 1 ; i<= n ; i++){
        nums.push_back(i) ;
    }
    backtrack(itr, cur , k , nums , result ) ;
    return result; 
}

int main() {
    int n = 4 ;
    int k = 2 ; 
    vector<vector<int>> result = combinations(n,k) ;
    for(auto i : result ){
        cout<<"[" ;
        for(auto j : i) {
            cout<<j<<"," ;
        }
        cout<<"]"<<endl;
    }
    return 0;
}
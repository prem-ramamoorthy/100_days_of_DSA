#include<bits/stdc++.h>
using namespace std ;

int maximumWealth(vector<vector<int>>& accounts) {
    int result = 0 ;
    for(auto i : accounts) {
        int n = 0 ;
        for(int j :i ){
            n+=j ;
        }
        if(result<n){
            result = n ;
        }
    }
    return result ;
}

int main(){
    vector<vector<int>> nums = {{1,5},{7,3},{3,5}} ;
    cout<<maximumWealth(nums) ;
    return 0 ;
}
#include <bits/stdc++.h>
using namespace std;

void backtrack(int itr ,vector<int> cur , int total , vector<vector<int>>&result , int target , vector<int> candidates , int k ){
    if(cur.size() == k){
        if(total == target) {
            result.push_back(cur) ;
        }
    }
    for(int i = itr ; i < candidates.size() ; i++){
        if(total+candidates[i]>target){
            return ;
        }
        cur.push_back(candidates[i]);
        backtrack(i+1,cur,total+candidates[i] , result , target , candidates , k);
        cur.pop_back();
    }
}

vector<vector<int>> combinationSum2(int k , int n ){
    vector<int> candidates ; 
    for(int i =1 ; i<= 9 ; i++){
        candidates.push_back(i) ;
    }
    vector<vector<int>> result ;
    vector<int> cur ;
    sort(candidates.begin(), candidates.end());
    backtrack(0,cur , 0 , result , n , candidates , k ) ;
    return result ;
}

int main() {
    int k = 3; 
    int n  = 9 ;
    vector<vector<int>> result ;
    result = combinationSum2(k , n ) ;
    for(auto i : result ){
        cout<<"[" ;
        for(auto j : i) {
            cout<< j <<" ," ;
        }
        cout<<"]"<<endl;
    }
    return 0;
}
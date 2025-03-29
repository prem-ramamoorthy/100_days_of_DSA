#include <bits/stdc++.h>
using namespace std;

void backtrack(int itr ,vector<int> cur , int total , vector<vector<int>>&result , int target , vector<int> candidates ){
    if(total == target) {
        result.push_back(cur) ;
    }
    for(int i = itr ; i < candidates.size() ; i++){
        if(i> itr && candidates[i] == candidates[i-1]){
            continue ;
        }
        if(total+candidates[i]>target){
            return ;
        }
        cur.push_back(candidates[i]);
        backtrack(i+1,cur,total+candidates[i] , result , target , candidates);
        cur.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> candidates , int target){
    vector<vector<int>> result ;
    vector<int> cur ;
    sort(candidates.begin(), candidates.end());
    backtrack(0,cur , 0 , result , target , candidates) ;
    return result ;
}

int main() {
    vector<int> candidates = {10,1,2,7,6,1,5} ;
    int target = 8 ;
    vector<vector<int>> result ;
    result = combinationSum2(candidates , target ) ;
    for(auto i : result ){
        cout<<"[" ;
        for(auto j : i) {
            cout<< j <<" ," ;
        }
        cout<<"]"<<endl;
    }
    return 0;
}
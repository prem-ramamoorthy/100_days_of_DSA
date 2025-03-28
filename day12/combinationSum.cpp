#include <bits/stdc++.h>
using namespace std;

void backtrack(int itr , vector<int> cur , int total ,\
    vector<int> candidates , int target , vector<vector<int>>& result) {
    if(total == target) {
        result.push_back(cur) ;
        return;
    }
    if(total>target || itr>=candidates.size()) {
        return;
    }
    cur.push_back(candidates[itr]) ;
    backtrack(itr , cur , total+candidates[itr] , candidates , target , result);
    cur.pop_back() ;
    backtrack(itr+1 , cur , total , candidates , target , result);
}

vector<vector<int>> CombinationSum(vector<int> candidates , int target ) {
    vector<vector<int>>result ;
    int itr = 0 ;
    vector<int> cur ;
    int total = 0 ;
    backtrack(itr ,cur,total ,candidates ,target ,result); 
    return result ;
}

int main() {
    vector<int> candidates = {2,3,6,7} ;
    int target = 7 ;
    vector<vector<int>> result = CombinationSum(candidates, target);
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}
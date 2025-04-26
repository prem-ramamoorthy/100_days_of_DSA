#include<bits/stdc++.h> 
using namespace std ;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> result;
    map<int, int> hash;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            hash[grid[i][j]]++;
        }
    }
    int repeated = -1 ;
    int missing = -1 ;
    for (int i = 1; i <= n * n; ++i) {
        if (hash[i] == 0) {
            missing = i ;
        }
        if (hash[i] > 1) {
            repeated = i ;
        }
    }
    result.push_back(repeated) ;
    result.push_back(missing) ;
    return result;
}

int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}} ;
    vector<int> result = findMissingAndRepeatedValues(grid) ;
    cout<< "[" ;
    for(int i : result ){
        cout<<i<<" ," ;
    }
    cout<<"]" ;
    return 0 ; 
}
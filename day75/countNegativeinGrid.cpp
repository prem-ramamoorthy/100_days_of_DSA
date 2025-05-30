#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
        int result = 0 ;
        for(auto i : grid ){
            for(int j : i){
                if (j < 0){
                    result++ ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };
    cout << countNegatives(grid) << endl;
    return 0;
}
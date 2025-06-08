#include<bits/stdc++.h>
using namespace std;

int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &i : grid ){
            sort(i.begin() , i.end() ) ;
        }
        int result = 0 ;
        int n = grid.size() ;
        int n1 = grid[0].size() ;
        for( int i = n1 - 1 ; i >= 0 ; i-- ){
            int max = -1 ; 
            for( int j = 0 ; j < n ; j++ ){
                if(grid[j][i] > max){
                    max = grid[j][i] ;
                }
            }
            result += max ;
        }
        return result ;
    }

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = deleteGreatestValue(grid);
    cout << "The sum of the greatest values in each column is: " << result << endl;
    return 0;
}
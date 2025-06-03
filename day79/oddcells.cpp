#include<bits/stdc++.h>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int> > matrix (m , vector<int> (n,0));
        for(auto i : indices){
            int r  = i[0] ;
            int c = i[1] ;
            for(int j = 0 ; j < n ; j++){
                matrix[r][j]++;
            }
            for(int j = 0 ; j < m ; j++){
                matrix[j][c]++;
            }
        }
        int result = 0 ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] % 2 != 0){
                    result++;
                }
            }
        }
        return result ;
    }

int main() {
    int m = 2, n = 3;
    vector<vector<int>> indices = {{0,1},{1,1}};
    cout << "Number of odd cells: " << oddCells(m, n, indices) << endl;
    return 0;
}
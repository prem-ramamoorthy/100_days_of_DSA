#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size() - 2;
        int it = 0;
        int row = 0;
        int inrow = 0;
        int incol = 0;
        vector<vector<int>> result;
        for (int i = 0; i < n; i++) {
            vector<int> result1;
            for (int j = 0; j < n; j++) {
                result1.push_back(0);
            }
            result.push_back(result1);
        }
        for (int i = 0; i < n * n; i++) {
            int curmax = 0;
            for (int j = 0; j < 3; j++) {
                int maxval = *max_element(grid[row+j].begin()+it, grid[row+j].begin()+it+ 3);
                if (curmax < maxval) {
                    curmax = maxval;
                }
            }
            result[inrow][incol] = curmax;
            incol++;
            if (incol == n) {
                incol = 0;
                inrow++;
            }
            it++;
            if (it == n) {
                it = 0;
                row++;
            }
        }
        return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result = largestLocal(grid);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> result;
        for (int i = 0; i < matrix.size(); i++) {
            int minVal = matrix[i][0];
            int colIdx = 0;
            for (int j = 1; j < matrix[i].size(); j++) {
                if (matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                    colIdx = j;
                }
            }
            bool isLucky = true;
            for (int k = 0; k < matrix.size(); k++) {
                if (matrix[k][colIdx] > minVal) {
                    isLucky = false;
                    break;
                }
            }

            if (isLucky) {
                result.push_back(minVal);
            }
        }

        return result;
    }

int main() {
    vector<vector<int>> matrix = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };
    vector<int> luckyNums = luckyNumbers(matrix);
    
    for (int num : luckyNums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
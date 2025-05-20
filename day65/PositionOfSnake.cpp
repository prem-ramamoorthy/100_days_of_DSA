#include<bits/stdc++.h>
using namespace std;

int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> matrix ; 
        int it = 0 ;
        for(int i = 0 ; i < n ; i++){
            vector<int> row ;
            for(int j = 0 ; j < n ; j++){
                row.push_back(it) ;
                it++;
            }
            matrix.push_back(row) ;
        }
        int row = 0 ;
        int column = 0 ;
        for(string i : commands){
            if(i=="DOWN"){
                row++;
            }
            else if(i=="UP"){
                row--;
            }
            else if(i == "RIGHT"){
                column++;
            }
            else if(i == "LEFT"){
                column--;
            }
        }
        return matrix[row][column] ;
    }

int main() {
    int n = 3;
    vector<string> commands = {"DOWN", "RIGHT", "UP", "LEFT"};
    cout << finalPositionOfSnake(n, commands) << endl; 
    return 0;   
}
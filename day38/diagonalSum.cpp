#include<bits/stdc++.h>
using namespace std ;

int diagonalSum(vector<vector<int>> mat){
    int result = 0 ;
    int n = mat.size() ;
    for(int i = 0 ; i <n ; i ++){
        result+=mat[i][i] ;
        result += mat[i][n-1-i] ;
    }
    if(n%2==1){
        result -= mat[n/2][n/2];
    }
    return result;
}

int main(){
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Diagonal Sum: " << diagonalSum(mat) << endl;
    return 0;
}
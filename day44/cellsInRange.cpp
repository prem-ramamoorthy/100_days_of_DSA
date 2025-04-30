#include<bits/stdc++.h>
using namespace std ;

vector<string> cellsInRange(string s) {
    vector<string> result;
    char startCol = s[0];
    char endCol = s[3];
    char startRow = s[1];
    char endRow = s[4];

    for (char col = startCol; col <= endCol; col++) {
        for (char row = startRow; row <= endRow; row++) {
            string cell = "";
            cell += col;
            cell += row;
            result.push_back(cell);
        }
    }
    return result;
}

int main(){
    vector<string> result = cellsInRange("A1:F1");
    for (const string& cell : result) {
        cout << cell << " ";
    }
    cout << endl;
    return 0 ;
}
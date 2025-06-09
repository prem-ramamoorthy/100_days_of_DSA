#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> result ;
        map<int,int> hash ;
        for(auto i : items1){
            hash[i[0]]+=i[1] ;
        }
        for(auto i : items2){
            hash[i[0]]+=i[1] ;
        }
        for(auto i : hash){
            result.push_back({i.first, i.second}) ;
        }
        return result ; 
    }

int main() {
    vector<vector<int>> items1 = {{1, 1}, {2, 2}, {3, 3}};
    vector<vector<int>> items2 = {{2, 3}, {3, 4}, {4, 5}};
    
    vector<vector<int>> mergedItems = mergeSimilarItems(items1, items2);
    
    for (const auto& item : mergedItems) {
        cout << "[" << item[0] << ", " << item[1] << "] ";
    }
    
    return 0;
}
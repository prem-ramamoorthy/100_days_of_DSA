#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result ;
        map<int,int> hash ;
        for(auto i : nums1){
            hash[i[0]]+=i[1] ;
        }
        for(auto i : nums2){
            hash[i[0]]+=i[1] ;
        }
        for(auto i : hash){
            result.push_back({i.first, i.second}) ;
        }
        return result ; 
    }

int main() {
    vector<vector<int>> nums1 = {{1, 2}, {2, 3}, {3, 4}};
    vector<vector<int>> nums2 = {{2, 5}, {3, 6}, {4, 7}};
    
    vector<vector<int>> mergedArrays = mergeArrays(nums1, nums2);
    
    for (const auto& item : mergedArrays) {
        cout << "[" << item[0] << ", " << item[1] << "] ";
    }
    
    return 0;
}
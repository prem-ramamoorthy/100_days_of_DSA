#include<bits/stdc++.h>
using namespace std;

vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for (int j = 0; j < n; j++) {
            set<int> prefix(nums.begin(), nums.begin() + j+1);  
            set<int> suffix(nums.begin() + j+1, nums.end()); 
            result.push_back(prefix.size() - suffix.size());
        }
        return result;
    }

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    vector<int> result = distinctDifferenceArray(nums);
    cout << "Distinct difference array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
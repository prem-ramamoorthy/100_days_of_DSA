#include<bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result ; 
        sort(nums.begin() , nums.end()) ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                result.push_back(i) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> result = targetIndices(nums, target);
    
    cout << "Target indices: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std ;

vector<int> buildArray(vector<int>& nums) {
    vector<int> result ;
    for(int i = 0 ; i < nums.size() ; i++){
        result.push_back(nums[i]) ;
    }
    for(int i = 0 ; i < nums.size() ; i ++){
        result[i] = nums[nums[i]] ;
    }
    return result ;
}

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> result = buildArray(nums);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
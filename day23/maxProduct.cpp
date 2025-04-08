#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int max1 = 0 ;
    int max2 = 0;
    for(int i =0 ; i<nums.size() ; i++){
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }
    return (max1-1) * (max2-1) ;
}

int main() {
    vector<int> nums = {1,5,4,5} ;
    cout<<maxProduct(nums) ;
    return 0;
}
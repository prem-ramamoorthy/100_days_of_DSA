#include <bits/stdc++.h>
using namespace std;

int maxAdjacentDistance(vector<int>& nums) {
        int result = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            if(i==(n-1)){
                int diff = abs(nums[0] - nums[i] ) ;
                result = max(result , diff ) ;
            }
            else{
                int diff = abs(nums[i] - nums[i+1] ) ;
                result = max(result , diff ) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int maxDiff = maxAdjacentDistance(nums);
    
    cout << "Maximum Difference in Adjacent Elements: " << maxDiff << endl;

    return 0;
}
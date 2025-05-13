#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            int start = max(0, i - nums[i]);
            total += prefix[i + 1] - prefix[start];
        }
        
        return total;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int result = subarraySum(nums);
    cout << "Total subarray sum: " << result << endl;
    return 0;
}

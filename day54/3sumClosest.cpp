#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; ++i) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (abs(current_sum - target) < abs(closest - target)) {
                    closest = current_sum;
                }

                if (current_sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }

        return closest;
    }
int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums, target) << endl; // Output: 2
    return 0;
}
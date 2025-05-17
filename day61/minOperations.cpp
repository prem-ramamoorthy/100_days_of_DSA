#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
        int result = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(i+1 < nums.size()){
                if(nums[i]>=nums[i+1]){
                    int n = ((nums[i]-nums[i+1]) + 1) ;
                    result+= n;
                    nums[i+1] += n ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 5, 2, 4, 1};
    cout << minOperations(nums) << endl; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) {
        int result = 0 ; 
        for(int i = 0 ; i < nums.size() ; i ++){
            if(nums[i] < k){
                result++;
            }
        }
        return result ;
    }

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    cout << minOperations(nums, k) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int k) {
        int result = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[i]==nums[j] && ((i*j) % k == 0) ){
                    result++;
                }
            }
        }
        return result ;
    }

int main(){
    vector<int> nums = {1,2,3,1,1,3};
    int k = 2;
    cout << countPairs(nums,k) << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;

int countPairs(vector<int>& nums, int target) {
    int result = 0 ;
    for(int i = 0 ; i < nums.size() ; i ++){
        for(int j = i+1 ; j < nums.size() ; j++){
            if(nums[j]+nums[i]<target){
                result++;
            }
        }
    }
    return result ;
}

int main() {
    vector<int> nums =  {-6,2,5,-2,-7,-1,3} ;
    cout<<countPairs(nums,-2) ;
    return 0 ;
}
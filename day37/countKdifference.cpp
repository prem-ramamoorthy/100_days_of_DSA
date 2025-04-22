#include<bits/stdc++.h> 
using namespace std ;

int countKDifference(vector<int>& nums, int k) {
    int result = 0 ; 
    for(int i = 0 ; i <nums.size() ; i++){
        for(int j = i ; j < nums.size() ; j++){
            if(abs(nums[i] - nums[j]) == k){
                result++ ;
            }
        }
    }
    return result ;
}

int main(){
    vector<int> nums = { 3,2,1,5,4} ;
    cout<<countKDifference(nums , 2) ;
    return 0 ;
}
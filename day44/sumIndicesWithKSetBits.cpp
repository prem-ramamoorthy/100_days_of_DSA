#include<bits/stdc++.h>
using namespace std ;

int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int result = 0 ; 
    for(int i = 0 ; i< nums.size() ; i++){
        int count = 0 ;
        int num = i ; 
        while (num > 0) {
            if (num % 2 == 1) count++;
            num /= 2;
        }
        if(count == k){
            result+=nums[i] ;
        }
    }
    return result ;
}

int main(){
    vector<int> nums = {5,10,1,5,2} ;
    int k = 1 ;
    cout << sumIndicesWithKSetBits(nums, k) << endl; // Output: 13
    return 0 ;
}
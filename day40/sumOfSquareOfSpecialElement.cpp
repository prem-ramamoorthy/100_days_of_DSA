#include<bits/stdc++.h>
using namespace std ;

int sumOfSquares(vector<int>& nums) {
    int result = 0 ; 
    int n = nums.size() ;
    for(int i = 1 ; i <= n ; i++){
        if(n%i == 0){
            result += nums[i-1]*nums[i-1] ;
        }
    }
    return result ;
}

int main(){
    vector<int>nums = {2,7,1,19,18,3} ;
    cout << sumOfSquares(nums) ;
    return 0 ;
}
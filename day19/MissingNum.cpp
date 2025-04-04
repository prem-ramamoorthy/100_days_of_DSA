#include <bits/stdc++.h>
using namespace std;

int missing_num(vector<int> nums){
    int n = nums.size() ;
    int act_sum = (n*(n+1)/2) ;
    int sum_c = 0 ;
    for(int i = 0 ; i < n ; ++i){
        sum_c+=nums[i] ;
    }
    return act_sum - sum_c ;
}

int main() {
    vector<int> nums = {9,6,4,2,3,5,7,0,1} ;
    cout<<missing_num(nums)<<endl ;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int differenceOfSum(vector<int>& nums) {
    int elesum = 0 ;
    int dsum = 0 ;
    for(int i : nums){
        elesum += i ;
        while(i>0){
            dsum += i%10 ;
            i = i /10; 
        }
    }
    return abs(elesum-dsum) ;
}

int main() {
    vector<int> nums = {1,15,6,3} ;
    cout<<differenceOfSum(nums) <<endl ;
    return 0;
}

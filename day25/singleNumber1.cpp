#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    map<int,int> hash ;
    for(auto i : nums){
        hash[i]++;
    }
    for(auto i : hash){
        if(i.second == 1){
            return i.first ;
        }
    }
    return -1 ;
}

int main() {
    vector<int> nums = {0,1,0,1,0,1,99} ;
    cout<<singleNumber(nums) ;
    return 0;
}
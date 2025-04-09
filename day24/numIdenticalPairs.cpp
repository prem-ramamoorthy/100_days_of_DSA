#include <bits/stdc++.h>
using namespace std;

int numberIdenticalPairs(vector<int> nums){
    map<int,int> hash ;
    for(int i = 0 ; i < nums.size() ; i++){
        hash[nums[i]]++ ;
    }
    int result = 0 ;
    for(auto i : hash){
        if(i.second >= 2){
            result += i.second * (i.second-1) / 2 ;
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {1,2,3,1,1,3} ;
    cout<<numberIdenticalPairs(nums) ;
    return 0;
}
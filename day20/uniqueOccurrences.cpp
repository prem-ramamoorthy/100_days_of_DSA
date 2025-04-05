#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> nums){
    map<int,int> hash ;
    for(int i = 0 ; i < nums.size() ; i++ ){
        hash[nums[i]]++;
    }
    set<int> hash2 ;
    for(auto i : hash){
        hash2.insert(i.second);
    }
    return hash2.size() == hash.size() ;
}

int main() {
    vector<int> nums = {1,2,2,1,1,3} ;
    cout<<uniqueOccurrences(nums) ;
    return 0;
}
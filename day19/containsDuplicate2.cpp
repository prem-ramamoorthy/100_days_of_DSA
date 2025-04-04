#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate2(vector<int> nums , int k){
    unordered_map<int,int> hash ;
    for(int i = 0 ; i < nums.size() ; i++){
        if(hash.find(nums[i]) != hash.end() && abs(i- hash[i])<= k){
            return true ;
        }
    }
    return false ;
}

int main() {
    vector<int> nums = {1,2,3,1,2,3} ;
    int k = 2 ; 
    cout<<containsDuplicate2(nums, k)<<endl ; 
    return 0;
}
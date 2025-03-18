#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> nums){
    unordered_set<int> seen ;
    for(int i = 0 ; i < nums.size() ; i ++) {
        if(seen.find(nums[i])!=seen.end()){ //find() return iterator of the repeated element 
            return true ;                   // if element not found it returns the seen.end() 
        }                                   // we can assume that if seen.end() not equal to the seen.find() 
                                            //then an element is already exists 
        seen.insert(nums[i]);
    }
    return false ; 
}

int main() {
    vector<int> nums = {1,2,3,1,2} ; 
    vector<int> nums2 = {1,2,3,4, 5} ; 
    cout<<containsDuplicate(nums)<<endl;
    cout<<containsDuplicate(nums2)<<endl;
    return 0;
}
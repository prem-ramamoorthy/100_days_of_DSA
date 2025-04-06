#include <bits/stdc++.h>
using namespace std;

int NrepeatedElement(vector<int> nums){
    int len = nums.size() ;
    int n = len /2 ;
    map<int,int> hash ;
    for(int i= 0 ; i <len ; i++){
        hash[nums[i]]++ ;
    }
    for(auto i : hash ){
        if(i.second == n){
            return i.first ;
        }
    }
}

int main() {
    vector<int> nums = {5,1,5,2,5,3,5,4} ;
    cout<<NrepeatedElement(nums) ;
    return 0;
}
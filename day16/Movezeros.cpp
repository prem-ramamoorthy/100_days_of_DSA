#include <bits/stdc++.h>
using namespace std;

void movezeros(vector<int>&nums){
    int c = 0 ;
    vector<int> nums2 ;
    for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i]==0){
            c++;
        }
        else{
            nums2.push_back(nums[i]);
        }
    }
    for(int i= 0 ; i<c ; i++) {
        nums2.push_back(0) ;
    }
    nums = nums2 ;
}

int main() {
    vector<int> nums = {1,0,2,0,12,3,0};
    movezeros(nums) ;
    cout<<"[ ";
    for(auto i : nums){
        
        cout<<i<<" ,";
    }
    cout<<"]"<<endl; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    map<int,int> hash ;
    int max = *max_element(nums.begin() , nums.end()  ) ;
    if(max<0){
        max = 0 ;
    }
    for(int i = 0 ; i < nums.size() ; i++){
        hash[nums[i]]++;
    }
    for(int i = 1 ; i < max ; i++){
        if(hash[i]  == 0){
            return i;
        }
    }
    return max+1 ;
}

int main(){
    vector<int> nums = {3,4,-1,1} ;
    cout << firstMissingPositive(nums) << endl;
    return 0;
}
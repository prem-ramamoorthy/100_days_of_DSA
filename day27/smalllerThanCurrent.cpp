#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result ;
    for(int i = 0 ; i < nums.size() ; i++){
        int n = 0 ;
        for(int j = 0 ; j< nums.size() ; j++){
            if(nums[i] > nums[j]){
                n++;
            }
        }
        result.push_back(n) ;
    }
    return result ;
}

int main() {
    vector<int> nums = {6,5,4,8} ;
    vector<int> result  = smallerNumbersThanCurrent(nums) ;
    cout<<"[";
    for(int i : result ){
        cout<<i<<" ,";
    }
    cout<<"]" ;
    return 0;
}
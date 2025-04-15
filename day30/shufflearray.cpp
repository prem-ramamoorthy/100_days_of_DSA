#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result ;
    for(int i = 0 ; i < n ; i++){
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }
    return result ;
}

int main() {
    vector<int> nums = {2,5,1,3,4,7} ;
    vector<int> result  = shuffle(nums, 3) ;
    cout<<"[" ;
    for(int i = 0 ; i< result.size() ;i++) {
        cout<<result[i] <<" ,";
    }
    cout<<"]" ;
    return 0;
}
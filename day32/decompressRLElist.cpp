#include<bits/stdc++.h>
using namespace std ;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> result ;
    for(int i = 0 ; i < nums.size() ; i+=2 ){
        for(int j = 0 ; j < nums[i] ; j++){
            result.push_back(nums[i+1]);
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {1,1,2,3} ;
    vector<int> result = decompressRLElist(nums) ;
    cout<<"[" ;
    for(int i : result) {
        cout<<i<<" ," ;
    }
    cout<<"]"<<endl ;
    return 0 ;
}
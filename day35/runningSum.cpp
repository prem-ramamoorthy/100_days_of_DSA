#include<bits/stdc++.h> 
using namespace std ;

vector<int> runningSum(vector<int>& nums) {
    vector<int> result ;
    int s = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        s+=nums[i] ;
        result.push_back(s) ;
    }
    return result ;
}

int main(){
    vector<int> nums = {3,1,2,10,1} ;
    vector<int> result = runningSum(nums) ;
    cout<<"[" ;
    for(int i : result){
        cout<<i << " ,";
    }
    cout<<"]" ;
    return 0 ;
}
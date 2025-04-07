#include <bits/stdc++.h>
using namespace std;

vector<int> sortByParity(vector<int> nums){
    vector<int> result ;
    int n = nums.size() ;
    for(int i = 0 ; i < n ; i++){
        result.push_back(0);
    }
    int odd = 1 ;
    int even = 0 ;
    for(int i = 0 ; i<n ; i++){
        if(nums[i]%2==0){
            result[even] = nums[i] ;
            even+=2 ;
        }
        else{
            result[odd] = nums[i] ;
            odd+=2 ;
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {4,2,5,7} ;
    vector<int> result = sortByParity(nums) ;
    cout<<"[";
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<", ";
    }
    cout<<"]" ;
    return 0;
}
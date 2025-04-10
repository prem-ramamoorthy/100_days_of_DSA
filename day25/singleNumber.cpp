#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    map<int,int> hash ;
    for(int i =0 ; i<nums.size() ; i++){
        hash[nums[i]]++;
    }
    vector<int>result ;
    int c = 0 ;
    for(auto i : hash){
        if(c==2){
            break ;
        }
        if(i.second == 1){
            result.push_back(i.first);
            c++;
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {1,2,1,3,2,5} ;
    vector<int> result = singleNumber(nums) ;
    cout<<"[" ;
    for(int i : result){
        cout<<i<<" ,";
    }
    cout<<"]"<<endl ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std ;

vector<int> getSneakyNumbers(vector<int>& nums) {
    map<int,int> hash ;
    for(int i  : nums) {
        hash[i]++;
    }
    vector<int> result ;
    for(auto i : hash){
        if(i.second > 1){
            result.push_back(i.first) ;
        }
    }
    return result ;
}

int main(){
    vector<int> nums = {0,1,1,0} ;
    cout<<'[' ;
    vector<int> result = getSneakyNumbers(nums) ;
    for(auto i : result ){
        cout<<i<<" ,";
    }
    cout<<"]";
    return 0 ;
}
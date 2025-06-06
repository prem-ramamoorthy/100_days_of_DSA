#include<bits/stdc++.h>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> hash ;
        for(int i : nums){
            hash[i]++;
        }
        int ans1 = 0 ;
        int ans2 = 0 ; 
        for(auto i : hash){
            ans1+= i.second / 2 ;
            ans2+= i.second % 2 ;
        }

        return {ans1 , ans2 } ;
    }

int main() {
    vector<int> nums = {1,1,2,3,4,3,2} ;
    vector<int> result = numberOfPairs(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0 ;
}
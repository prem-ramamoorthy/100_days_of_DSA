#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> nums , int val){
    int count = nums.size();
    for(int i = 0 ;i < count;){
        if(nums[i]==val){
            nums.erase(nums.begin() + i);
        }
        else{
            i++;
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums = {1,2,2,4,3,4};
    int val = 2 ;
    cout<<removeElement(nums , val)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int arithmeticTriplets(vector<int>& nums, int diff) {
        int result = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                for(int k = j ; k < n ; k++){
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
                        result++;
                    }
                }
            }
        }
        return result ;
}

int main() {
    vector<int> nums = {0, 1, 2, 3, 4};
    int diff = 1;
    cout << arithmeticTriplets(nums, diff) << endl; 
    return 0;
}
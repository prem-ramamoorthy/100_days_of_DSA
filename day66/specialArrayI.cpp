#include<bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums) {
        bool result = true ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            if(i+1 < n && nums[i]%2 == nums[i+1]%2 ){
                result = false ;
                break ;
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    bool result = isArraySpecial(nums);
    cout << "Is the array special? " << (result ? "Yes" : "No") << endl;
    return 0;
}
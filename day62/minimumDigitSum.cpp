#include<bits/stdc++.h>
using namespace std;

int minElement(vector<int>& nums) {
        int result = 9e6 ;
        for(int i = 0 ; i < nums.size() ; i++){
            int n = nums[i] ;
            int sum = 0 ;
            while(n>0){
                sum+=n%10 ;
                n = n /10 ;
            }
            nums[i] = sum ;
        }
        return *min_element(nums.begin() , nums.end()) ;
    }

int main() {
    vector<int> nums = {123, 456, 789};
    cout << minElement(nums) << endl;
    return 0;
}
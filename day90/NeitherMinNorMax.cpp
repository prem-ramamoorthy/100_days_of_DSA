#include <bits/stdc++.h>
using namespace std;

int findNonMinOrMax(vector<int>& nums) {
        int min = *min_element(nums.begin() , nums.end() ) ;
        int max = *max_element(nums.begin() , nums.end() ) ;
        for(int i : nums){
            if(i != min && i != max){
                return i ;
            }
        }
        return -1 ;
    }

int main() {
    vector<int> nums = {3, 1, 2, 5, 4};
    int result = findNonMinOrMax(nums);
    cout << "The first element that is neither minimum nor maximum is: " << result << endl;
    return 0;
}
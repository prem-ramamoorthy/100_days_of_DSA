#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin() , nums.end() ) ;
        int b = *max_element(nums.begin() , nums.end() ) ;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a ;
    }

int main() {
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << "GCD of min and max: " << findGCD(nums) << endl; 
    return 0;
}
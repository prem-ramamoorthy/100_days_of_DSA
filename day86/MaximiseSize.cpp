#include<bits/stdc++.h>
using namespace std;

int maximizeSum(vector<int>& nums, int k) {

        int num = *max_element(nums.begin() , nums.end() ) ;
        int result =0 ;
        for(int i = 0 ; i< k ; i++){
            result+=num ;
            num++ ;
        }
        return  result  ;
    }

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout << "Maximized Sum: " << maximizeSum(nums, k) << endl; 
    return 0;
}
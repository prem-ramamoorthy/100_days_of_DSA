#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int result = 0 ; 
    for(int i : nums){
        if(i % 3 != 0){
            if(i+1 % 3 != 0){
                result+=1;
            }
            else if (i-1 % 3 != 0){
                result++;
            }
        }
    }
    return result ;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << minimumOperations(nums) << endl; 
    return 0;
}
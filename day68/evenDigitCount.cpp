#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
        int result = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0 ;
            int n = nums[i] ;
            while(n>0){
                count++;
                n = n / 10 ; 
            }
            if(count % 2 == 0){
                result ++ ;
            }
        }
        return result ;
    }

int main(){
    vector<int> nums = {12,345,2,6,7896};
    cout << findNumbers(nums) << endl;
    return 0;
}
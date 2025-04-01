#include <bits/stdc++.h>
using namespace std;

int maxconsone(vector<int> nums){
    int res = 0 ;
    int temp = 0 ;
    bool cons = false ;
    for(int i = 0 ; i <nums.size() ;i++){
        if(nums[i]==1){
            cons = true ;
            if (cons == true){
                temp++;
            }
            if(res<temp){
                res = temp ;
            }
        }
        else{
            cons = false ;
            temp = 0 ;
        }
    }
    return res ;

}

int main() {
    vector<int> nums = {1,0,1,1,0,1} ;
    int result = maxconsone(nums) ;
    cout<<result ;
    return 0;
}
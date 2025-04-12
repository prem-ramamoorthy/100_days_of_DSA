#include <bits/stdc++.h>
using namespace std;

int SumOddLengthSubbarrays(vector<int> nums) {
    vector<int> odds ;
    int n = nums.size() ;
    for(int i = 1 ; i < n + 1 ; i+=2){
        odds.push_back(i) ;
    }
    int result = 0 ; 
    for(int i : odds){
        int it = 0 ;
        while(it+i<=n){
            int s = 0 ;
            vector<int> sub(nums.begin()+it , nums.begin()+it+i ) ;
            for(int j = 0 ; j <sub.size() ; j++){
                s+=sub[j] ;
            }
            it+=1 ;
            result += s ;
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {1,4,2,5,3} ;
    cout<<SumOddLengthSubbarrays(nums) ;
    return 0;
}
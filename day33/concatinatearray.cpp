#include<bits/stdc++.h>
using namespace std ;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> result ;
    int n = nums.size();
    for(int i = 0 ; i < n  * 2  ; i++ ){
        result.push_back(nums[i % n ]) ;
    }
    return result ;

}

int main (){
    vector<int> nums = {1,3,2,1} ;
    vector<int > result = getConcatenation(nums) ;
    cout<<"[" ;
    for(int i : result ) {
        cout<<i <<" ," ;
    }
    cout<<"]" ;
    return 0 ;
}
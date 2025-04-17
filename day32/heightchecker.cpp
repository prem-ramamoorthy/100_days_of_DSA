#include<bits/stdc++.h>
using namespace std ;

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights ;
    sort(expected.begin() , expected.end() ) ;
    int result = 0;
    for(int i = 0 ; i< heights.size() ; i++){
        if(heights[i] != expected[i]) {
            result++ ;
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {1,1,4,2,1,3} ;
    cout<<heightChecker(nums) ;
    return 0 ;
}
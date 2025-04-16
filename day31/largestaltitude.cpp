#include<bits/stdc++.h>
using namespace std ;

int largestAltitude(vector<int>& gain) {
    vector<int> altitude ;
    int init = 0 ;
    altitude.push_back(0) ;
    for(int i : gain ){
        init = init + i ;
        altitude.push_back(init) ;
    }
    int result = *max_element(altitude.begin(), altitude.end()) ;
    return  result;
}

int main () {
    vector<int> nums = {-5,1,5,0,-7} ;
    cout<<largestAltitude(nums) ;
    return 0 ;
}
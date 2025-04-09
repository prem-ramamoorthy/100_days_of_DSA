#include <bits/stdc++.h>
using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int result = 0 ;
    int n = arr.size() ;
    for(int i = 0 ; i < n-2; i++){
        for(int j = i + 1 ;j < n-1  ;j++){
            if(abs(arr[i] - arr[j]) <= a){
                for(int k = j +1 ; k < n; k++){
                    if(abs(arr[j] - arr[k])<= b && abs(arr[i] - arr[k])<= c){
                        result++;
                    }
                }
            }
        }
    }
    return result ;
}

int main() {
    vector<int> nums = {7,3,7,3,12,1,12,2,3};
    cout<<countGoodTriplets(nums, 5, 8, 1) ;
    return 0;
}
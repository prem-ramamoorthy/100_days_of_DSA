#include<bits/stdc++.h>
using namespace std;

bool divideArray(vector<int>& nums) {
        map<char,int> hash ;
        for(int i : nums){
            hash[i]++;
        }
        for(auto i : hash){
            if(i.second % 2 != 0 ){
                return false ;
            }
        }
        return true ;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    if (divideArray(nums)) {
        cout << "The array can be divided into pairs with equal elements." << endl;
    } else {
        cout << "The array cannot be divided into pairs with equal elements." << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int sumCounts(vector<int>& nums) {
        int n = nums.size() ;
        int result = 0 ;
        for(int i = 1 ; i <= n ; i++){
            int it = 0 ;
            while(it <= n-i){
                set<int> uniq(nums.begin()+it , nums.begin()+it+i) ;
                it++;
                result += pow(uniq.size() , 2) ; 
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 2, 1, 3, 4};
    cout << "Sum of squares of distinct counts: " << sumCounts(nums) << endl;
    return 0;
}
#include<bits/c++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
        map<int,int> hash ;
        for(int i = 0 ; i < nums.size() ; i++){
            hash[nums[i]]++;
        }
        int maxi = -1 ;
        for(auto i : hash){
            maxi = max(i.second , maxi ) ;
        }
        int n = 0 ;
        for(auto i : hash){
            if (i.second == maxi ){
                n++;
            }
        }
        return n*maxi ;
    }

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    cout << "Maximum frequency count: " << maxFrequencyElements(nums) << endl;
    return 0;
}
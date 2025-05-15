#include<bits/stdc++.h>
using namespace std;

vector<int> numberGame(vector<int>& nums) {
        vector<int> result ;
        int n = nums.size() ;
        while(nums.size() > 0 ){
            int min1 = *min_element(nums.begin() , nums.end() ) ;
            auto it = find(nums.begin(), nums.end(), min1);
            if (it != nums.end()) {
                nums.erase(it);
            }
            int min2 = *min_element(nums.begin() , nums.end() ) ;
            auto it1 = find(nums.begin(), nums.end(), min2);
            if (it1 != nums.end()) {
                nums.erase(it1);
            }
            result.push_back(min2) ;
            result.push_back(min1) ;
        }
        return result ;
    }

int main(){
    vector<int> nums = {1,2,3,1,1,3};
    vector<int> result = numberGame(nums);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

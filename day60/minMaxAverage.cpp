#include<bits/stdc++.h>
using namespace std;

double minimumAverage(vector<int>& nums) {
        double result = 1e9 ; 
        int n = nums.size()/2 ;
        for(int i = 0 ; i <n ; i++){
            int min = *min_element(nums.begin() , nums.end() );
            int max = *max_element(nums.begin() , nums.end() );
            auto it = find(nums.begin(), nums.end(), min);
            if (it != nums.end()) {
                nums.erase(it);
            }
            auto it1 = find(nums.begin(), nums.end(), max);
            if (it1 != nums.end()) {
                nums.erase(it1);
            }
            double avg = (min+max)/2.0 ;
            if(result>avg){
                result = avg ;
            }
        }
        return result ;
    }

int main(){
    vector<int> nums = {1,2,3,4,5};
    cout << minimumAverage(nums) << endl;
    return 0;
}
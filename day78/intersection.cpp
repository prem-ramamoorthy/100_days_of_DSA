#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> unique ;
        for(int i = 0 ; i < nums1.size() ; i++){
            if(find(nums2.begin() , nums2.end() , nums1[i]) != nums2.end() ){
                unique.insert(nums1[i]) ;
            }
        }
        vector<int> result(unique.begin() , unique.end() ) ;
        return result ;
    }

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1, nums2);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
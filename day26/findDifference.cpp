#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result = {{} ,{}} ;
        int n = nums1.size() ;
        map<int ,int > hash ;
        set<int> num1 ;
        set<int> num2 ;
        for(int i =0 ; i< n ; i++){
            num1.insert(nums1[i]);
        }
        for(int i : nums2){
            num2.insert(i) ;
        }
        for(int i : num1){
            hash[i]++ ;
        }
        for(int i : num2){
            hash[i]++;
        }
        for(auto i : hash){
            if(i.second == 1){
                if(find(nums1.begin() , nums1.end() ,i.first) != nums1.end()){
                    result[0].push_back(i.first) ;
                }
                else{
                    result[1].push_back(i.first) ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<int> nums1 = {-68,-80,-19,-94,82,21,-43} ;
    vector<int> nums2 = {-63};
    vector<vector<int>> result = findDifference(nums1, nums2);
    cout<<"[" ;
    for (const auto& vec : result) {
        cout<<"[";
        for (int num : vec) {
            cout << num << " ,";
        }
        cout <<"]"<< endl;
    }
    cout<<"]" <<endl ;
    return 0;
}
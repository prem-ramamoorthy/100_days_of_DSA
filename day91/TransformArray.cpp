#include<bits/stdc++.h>
using namespace std;

vector<int> transformArray(vector<int>& nums) {
        vector<int> result ;
        for(int i : nums){
            if(i % 2 ==0){
                result.insert(result.begin(),0);
            }
            else{
                result.push_back(1);
            }
        }
        return result;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> transformed = transformArray(nums);
    
    cout << "Transformed Array: ";
    for(int num : transformed) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
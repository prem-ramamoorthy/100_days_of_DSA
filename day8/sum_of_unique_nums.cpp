#include <bits/stdc++.h>
using namespace std;

int sumOfuniqueElements(vector<int> nums ){
    map<int,int > hash ;
    for(int i =0 ; i< nums.size() ; i++){
        hash[nums[i]]++;
    }
    int count = 0 ;
    for(int i = 0 ; i< nums.size() ; i++){
        if(hash[nums[i]]==1 ){
            count+=nums[i];
        }
    }
    return count ;
}

int main() {
    vector<int> nums ;
    int count ;
    cin >> count ; 
    for(int i= 0 ; i <count ; i++){
        int temp ;
        cin>>temp ;
        nums.push_back(temp);
    }
    cout<<sumOfuniqueElements(nums)<<endl;
    return 0;
}
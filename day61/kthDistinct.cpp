#include<bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> hash ;
        for(string i : arr){
            hash[i]++;
        }
        int i = 1 ; 
        for(auto it : arr){
            if(hash[it]==1){
                if(i==k){
                    return it ;
                }
                i++;
            }
        }
        return "" ;
    }

int main() {
    vector<string> arr = {"d","b","c","b","c","a"};
    int k = 2;
    cout << kthDistinct(arr, k) << endl; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> hash ;
        for(int i = 0 ; i < target.size() ; i++){
            hash[target[i]] ++ ;
        }
        map<int, int > hash2 ;
        for(int i = 0 ; i < target.size() ; i++){
            hash2[arr[i]] ++ ;
        }
        return hash == hash2 ;
    }

int main() {
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};
    
    if (canBeEqual(target, arr)) {
        cout << "The arrays can be made equal." << endl;
    } else {
        cout << "The arrays cannot be made equal." << endl;
    }
    
    return 0;
}
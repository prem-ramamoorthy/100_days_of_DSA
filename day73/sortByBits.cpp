#include<bits/stdc++.h>
using namespace std;

vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> hash ;
        for(int i : arr){
            int num = i ;
            int bin = 0;
            while (i > 0) {
                string binary = to_string(i % 2);
                if(binary == "1"){
                    bin++;
                }
                i /= 2;
            }
            hash.push_back({num , bin }) ;
        }
        sort(hash.begin(), hash.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second)
            return a.first < b.first; 
        return a.second < b.second;
    });
        vector<int> result ;
        for(auto i : hash){
            result.push_back(i.first) ;
        }
        return result ;
    }

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> result = sortByBits(arr);
    
    cout << "Sorted by bits: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
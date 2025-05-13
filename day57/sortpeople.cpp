#include<bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> result ;
        map<int,string> hash ;
        for(int i = 0 ; i < names.size() ; i++){
            hash[heights[i]] = names[i] ;
        }
        for(auto i : hash){
            result.push_back(i.second) ;
        }
        reverse(result.begin(), result.end()) ;
        return result ;
    }

int main(){
    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};
    vector<string> result = sortPeople(names, heights);
    for(auto i : result){
        cout << i << " ";
    }
    return 0;
}
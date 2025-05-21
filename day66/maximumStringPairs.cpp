#include<bits/stdc++.h>
using namespace std;

int maximumNumberOfStringPairs(vector<string>& words) {
        map<string,int> hash ;
        for(string i : words){
            sort(i.begin() , i.end() ) ;
            hash[i]++ ;
        }
        int result = 0 ;
        for(auto i : hash){
            if(i.second > 1){
                result++ ;
            }
        }
        return result ;
}

int main() {
    vector<string> words = {"abc", "cba", "xyz", "zyx", "abc"};
    int result = maximumNumberOfStringPairs(words);
    cout << "Maximum number of string pairs: " << result << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int result = 0 ; 
    for(auto i : patterns){
        if(word.find(i) != -1){
            result++;
        }
    }
    return result ;
}

int main() {
    vector<string> patterns = {"a", "abc", "bc", "d"};
    string word = "abc";
    cout << numOfStrings(patterns, word) << endl; 
    return 0;
}
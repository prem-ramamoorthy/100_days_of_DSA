#include<bits/stdc++.h>
using namespace std;

bool isAcronym(vector<string>& words, string s) {
        string result = "" ;
        for(string i : words){
            result+=i[0] ;
        }
        return result == s ;
    }

int main() {
    vector<string> words = {"a", "b", "c", "d"};
    string s = "abcd";
    cout << isAcronym(words, s) << endl;
    return 0;
}
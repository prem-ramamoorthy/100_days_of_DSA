#include<bits/stdc++.h>
using namespace std ;

vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        string res = "";

        for (char c : s) {
            res += c;
            if (res.size() == k) {
                result.push_back(res);
                res = "";
            }
        }

        if (!res.empty()) {
            while (res.size() < k) {
                res += fill;
            }
            result.push_back(res);
        }

        return result;
    }

int main() {
    string s = "abcdefghij";
    int k = 3;
    char fill = 'x';

    vector<string> result = divideString(s, k, fill);

    for (const string& str : result) {
        cout << str << endl;
    }

}
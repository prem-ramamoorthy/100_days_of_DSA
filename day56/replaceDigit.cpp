#include<bits/stdc++.h>
using namespace std;

string replaceDigits(string s) {
        string result = "";
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                char shifted = s[i - 1] + (s[i] - '0');
                result += shifted;
            } else {
                result += s[i];
            }
        }
        return result;
}

int main() {
    string s = "a1b2c3d4e";
    cout << replaceDigits(s) << endl; 
    return 0;
}
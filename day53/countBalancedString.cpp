#include<bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;

        for (char c : s) {
            if (c == 'R') balance++;
            else if (c == 'L') balance--;

            if (balance == 0) count++;
        }

        return count;
}

int main() {
    string s = "RLRRLLRLRL";
    cout << balancedStringSplit(s) << endl;
    return 0;
}

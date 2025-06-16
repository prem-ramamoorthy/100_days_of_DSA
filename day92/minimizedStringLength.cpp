#include <bits/stdc++.h>
using namespace std;

int minimizedStringLength(string s) {
        unordered_set<char> uniq(s.begin() , s.end() ) ;
        return uniq.size() ;
    }

int main() {
    string s = "abacabad";
    int result = minimizedStringLength(s);
    cout << "Minimized string length: " << result << endl;
    return 0;
}
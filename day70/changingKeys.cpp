#include<bits/stdc++.h>
using namespace std;

int countKeyChanges(const std::string& s) {
        int result = 0;
        char prev = '\0';

        for (char c : s) {
            char lower = tolower(static_cast<unsigned char>(c));
            if (lower != prev) {
                result++;
                prev = lower;
            }
        }
        return result -1 ;
    }

int main() {
    string s = "aAbBcCdDeE";
    int result = countKeyChanges(s);

    cout << result << endl;
    
    return 0;
}
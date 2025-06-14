#include <bits/stdc++.h>
using namespace std;

int countPoints(string rings) {
    map<char, vector<int>> hash;
    int n = rings.size();
    vector<char> found;

    for(int i = 0; i < n; i++) {
        if(isdigit(rings[i])) {
            if(find(found.begin(), found.end(), rings[i]) == found.end()) {
                found.push_back(rings[i]);
                hash[rings[i]] = {0, 0, 0};
            }

            vector<int> colors = hash[rings[i]];
            if(rings[i - 1] == 'R') colors[0]++;
            else if(rings[i - 1] == 'G') colors[1]++;
            else if(rings[i - 1] == 'B') colors[2]++;
            hash[rings[i]] = colors;
        }
    }

    int result = 0;
    for(auto i : hash) {
        vector<int> colors = i.second;
        bool valid = true;
        for(int c : colors) {
            if(c == 0) {
                valid = false;
                break;
            }
        }
        if(valid) result++;
    }
    return result;
}


int main() {
    string rings = "B0B1G0R0R2G2";
    cout << countPoints(rings) << endl;
    return 0;
}
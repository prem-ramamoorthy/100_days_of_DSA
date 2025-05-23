#include<bits/stdc++.h>
using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> result(n, 0);

    for (int i = 0; i < n; ++i) {
        int sum = 0;

        if (k > 0) {
            for (int j = 1; j <= k; ++j) {
                sum += code[(i + j) % n];  // wrap-around using modulo
            }
        } else if (k < 0) {
            for (int j = 1; j <= -k; ++j) {
                sum += code[(i - j + n) % n];  // wrap-around backwards
            }
        }

        result[i] = sum;
    }

    return result;
}

int main() {
    vector<int> code = {5, 7, 1, 4};
    int k = 3;
    vector<int> result = decrypt(code, k);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

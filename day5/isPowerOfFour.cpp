#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if (n == 1) {
        return true;
    }
    if (n <= 0 || n % 4) {
        return false;
    }
    return isPowerOfFour(n / 4);
}

int main() {
    cout<<isPowerOfFour(16)<<endl;
    cout<<isPowerOfFour(15)<<endl;
    return 0;
}
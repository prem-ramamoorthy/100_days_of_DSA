#include <bits/stdc++.h>
using namespace std;

bool divisorGame(int N) {
    return N % 2 == 0;
}

int main() {
    int n = 0 ;
    cin >> n;   
    cout << divisorGame(n) << endl;
    return 0;
}
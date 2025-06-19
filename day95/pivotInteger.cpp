#include <bits/stdc++.h>
using namespace std ;

int pivotInteger(int n) {
        for (int x = 1; x <= n; x++) {
            int leftSum = 0, rightSum = 0;
            
            for (int i = 1; i <= x; i++)
                leftSum += i;

            for (int i = x; i <= n; i++)
                rightSum += i;

            if (leftSum == rightSum)
                return x;
        }
        return -1;
    }

int main() {
    int n;
    cin >> n;
    cout << pivotInteger(n) << endl;
    return 0;
}
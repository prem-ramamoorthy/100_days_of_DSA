#include<bits/stdc++.h> 
using namespace std ;

int countLargestGroup(int n) {
        unordered_map<int, int> groupSizes;
        int maxSize = 0;

        for (int i = 1; i <= n; ++i) {
            int sum = 0, x = i;
            while (x) {
                sum += x % 10;
                x /= 10;
            }
            groupSizes[sum]++;
            maxSize = max(maxSize, groupSizes[sum]);
        }

        int count = 0;
        for (auto& [key, size] : groupSizes) {
            if (size == maxSize) {
                count++;
            }
        }

        return count;
    }

int main() {
    int n = 13 ;
    cout<<countLargestGroup(n ) ;
    return 0 ;
}
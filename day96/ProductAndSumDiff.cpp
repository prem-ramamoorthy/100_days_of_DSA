#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
        int p = 1;
        int s = 0 ;
        while(n > 0){
            int d = n % 10 ;
            n = n / 10 ;
            p *= d ;
            s += d ;
        }
        return p - s ;
    }

int main() {
    int n = 234; 
    int result = subtractProductAndSum(n);
    cout << "Result: " << result << endl;
    return 0;
}
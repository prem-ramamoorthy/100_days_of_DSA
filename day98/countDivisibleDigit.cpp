#include<bits/stdc++.h>
using namespace std;

int countDigits(int num) {
        int n = num ;
        int result = 0 ;
        while(n > 0){
            int d = n % 10 ;
            if(num % d == 0){
                result++ ;
            }
            n /= 10 ;
        }
        return result ;
    }

int main() {
    int num = 1012;
    cout << "Count of digits that divide " << num << " is: " << countDigits(num) << endl;
    return 0;   
}
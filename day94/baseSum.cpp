#include<bits/stdc++.h>
using namespace std;

int sumBase(int n, int k) {
        string result = "";
        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

        while (n > 0) {
            int remainder = n % k;
            result = digits[remainder] + result;
            n /= k;
        }
        int number = stoi(result) ;
        int sum = 0 ;
        while(number > 0 ){
            sum += number %10 ;
            number = number /10 ;
        }
        return sum ;
    }

int main() {
    int n = 34, k = 6;
    cout << "Sum of digits in base " << k << " representation of " << n << ": " << sumBase(n, k) << endl;
    return 0;
}
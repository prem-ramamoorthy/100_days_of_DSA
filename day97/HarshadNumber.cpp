#include<bits/stdc++.h>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0 ;
        int n = x ;
        while(n > 0){
            sum += n %10 ;
            n = n / 10 ;
        }
        if(x % sum == 0){
            return sum ;
        }
        else {
            return -1 ;
        }
    }

int main() {
    int x = 18; 
    int result = sumOfTheDigitsOfHarshadNumber(x);
    
    if(result != -1) {
        cout << "The sum of the digits of the Harshad number " << x << " is: " << result << endl;
    } else {
        cout << x << " is not a Harshad number." << endl;
    }
    
    return 0;
}
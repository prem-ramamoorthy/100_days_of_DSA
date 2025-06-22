#include<bits/stdc++.h>
using namespace std;

int countSymmetricIntegers(int low, int high) {
        int result = 0 ;
        for(int i = low ; i <= high ; i++){
            vector<int> digits ; 
            int n = i ;
            while(n>0){
                int d = n % 10 ;
                digits.insert(digits.begin(),d);
                n /= 10 ;
            }
            int len = digits.size() ;
            if(len % 2 == 0){
                int prefix = 0 ;
                int sufix = 0 ;
                int length = len / 2 ;
                for(int i = 0 ; i < length ; i++){
                    prefix += digits[i] ;
                } 
                for(int i = length ; i < len ; i++){
                    sufix += digits[i] ;
                }
                if(prefix == sufix ){
                    result ++ ;
                }
            }
        }
        return result ;
    }

int main() {
    int low = 1, high = 1000;
    cout << "Count of symmetric integers between " << low << " and " << high << " is: " << countSymmetricIntegers(low, high) << endl;
    return 0;
}
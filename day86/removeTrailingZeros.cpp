#include <bits/stdc++.h>
using namespace std;

string removeTrailingZeros(string num) {
        reverse(num.begin() , num.end() ) ;
        string result ;
        int it = 0 ;
        for(char i : num){
            if(i != '0'){
                break ;
            }
            it++ ;
        }
        for(int i = it ; i < num.size() ; i++){
            result+=num[i] ;
        }
        reverse(result.begin() , result.end() ) ;
        return result ;
    }

int main() {
    string num = "123000";
    cout << "Number after removing trailing zeros: " << removeTrailingZeros(num) << endl; 
    return 0;
}
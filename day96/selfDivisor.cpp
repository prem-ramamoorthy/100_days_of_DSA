#include<bits/stdc++.h>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result ;
        for(int i = left ; i <= right ; i++){
            int num = i ;
            bool valid = true ;
            while(valid  && num > 0) {
                int digit = num % 10 ;
                if(digit == 0 ){
                    valid = false ;
                    break ;
                }
                if(i % digit != 0){
                    valid = false ;
                    break ;
                }

                num = num / 10 ;
            }
            if(valid){
                result.push_back(i) ;
            }
        }
        return result ;
    }

int main() {
    int left, right;
    left = 1;
    right = 22;
    vector<int> selfDividing = selfDividingNumbers(left, right);
    cout << "Self-dividing numbers in the range [" << left << ", " << right << "]: ";
    for (int num : selfDividing) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
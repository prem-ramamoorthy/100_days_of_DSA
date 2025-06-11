#include <bits/stdc++.h>
using namespace std;

int smallestIndex(vector<int>& nums) {
        int indsum = 0 ;
        for(int i : nums ){
            int n = i ;
            int digisum = 0 ;
            while(n>0){
                digisum+=n%10 ;
                n = n / 10 ;
            }
            if(digisum == indsum ){
                return indsum ;
            }
            indsum++;
        }
        return -1 ;
    }

int main() {
    vector<int> nums = {12, 23, 34, 45, 56};
    int result = smallestIndex(nums);
    cout << "Smallest index with equal digit sum: " << result << endl;
    return 0;
}
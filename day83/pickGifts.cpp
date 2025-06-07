#include<bits/stdc++.h>
using namespace std;

long long pickGifts(vector<int>& gifts, int k) {
        long long result = 0 ;
        for(int i = 0 ; i < k ; i ++){
            auto it = max_element(gifts.begin() , gifts.end() ) ;
            int max = *it ;
            *it -= max - static_cast<int>(sqrt(max));
        }
        for(int i : gifts) {
            result += i ;
        }
        return result ;
    }

int main() {
    vector<int> gifts = {25, 64, 9, 4, 100};
    int k = 4;
    cout << pickGifts(gifts, k) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) {
        int result = 0 ;
        int n = hours.size() ;
        for (int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(i!=j){
                    if(((hours[i]+hours[j]) % 24 == 0)){
                        result++;
                    }
                }
            }
        }
        return result ;
    }

int main() {
    vector<int> hours = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int result = countCompleteDayPairs(hours);
    cout << "Number of complete day pairs: " << result << endl;
    return 0;
}
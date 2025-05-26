#include<bits/stdc++.h>
using namespace std;

int countTestedDevices(vector<int>& batteryPercentages) {
        int result = 0 ;
        int n = batteryPercentages.size() ;
        for(int i =0 ; i < n ; i++) {
            if(batteryPercentages[i] > 0){
                result++ ;
                for(int j = i+1 ; j < n ; j ++){
                    batteryPercentages[j]-- ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<int> batteryPercentages = {1, 2, 3, 4, 5};
    int result = countTestedDevices(batteryPercentages);
    cout << "Number of devices tested: " << result << endl;
    return 0;
}
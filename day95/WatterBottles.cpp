#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles ;
        int used = result ;
        while( used >= numExchange ){
            int newBottles = used / numExchange ;
            result += newBottles ;
            used =  newBottles + (used % numExchange );
        }
        return result ;
    }

int main (){
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;
    cout << numWaterBottles(numBottles, numExchange) << endl;
    return 0;
}
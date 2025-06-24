#include<bits/stdc++.h>
using namespace std;

int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return ( arrivalTime + delayedTime ) % 24 ;
    }

int main() {
    int arrivalTime = 10;
    int delayedTime = 5;
    cout << "Delayed arrival time: " << findDelayedArrivalTime(arrivalTime, delayedTime) << endl;
    return 0;
}
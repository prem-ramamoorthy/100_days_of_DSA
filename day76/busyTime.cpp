#include<bits/stdc++.h>
using namespace std ;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int result = 0 ;
        for (int i= 0 ; i < startTime.size() ;i ++){
            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
                result++ ;
            }
        }
        return result ;
    }

int main() {
    vector<int> startTime = {1,2,3} ;
    vector<int> endTime = {3,2,7} ;
    int queryTime = 4 ; 
    cout<<busyStudy(startTime , endTime , queryTime ) ;
    return 0 ;
}
#include<bits/stdc++.h>
using namespace std ;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int result = 0 ; 
    for(int i : hours){
        if(i >= target){
            result++;
        }
    }
    return result ;
}

int main(){
    vector<int > hours = {0,1,2,3,4} ;
    cout<<numberOfEmployeesWhoMetTarget(hours,2) ;

    return 0 ;
}
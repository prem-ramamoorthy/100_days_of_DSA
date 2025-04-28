#include<bits/stdc++.h>
using namespace std ;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    vector<int> sortedseats = seats ;
    sort(sortedseats.begin() ,sortedseats.end() );
    vector<int> sortedstudents = students ;
    sort(sortedstudents.begin() ,sortedstudents.end() );
    int result = 0 ;
    for(int i = 0 ; i < sortedstudents.size() ; i++){
        result+= abs(sortedstudents[i] - sortedseats[i]) ;
    }
    return result ;
}

int main(){
    vector<int> students = {2,7,4} ;
    vector<int> seats = {3,1,5} ;
    cout<<minMovesToSeat(seats , students ) ;
    return 0 ;
}
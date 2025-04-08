#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result ;
    int max = 0 ;
    for(int i : candies){
        if(i>max){
            max = i ;
        }
    }
    for(int i : candies) {
        if(i+extraCandies >= max){
            result.push_back(true) ;
        }
        else{
            result.push_back(false) ;
        }
    } 
    return result ;
}

int main() {
    vector<int> candies = {4,2,1,1,2} ;
    int extraCandies = 1 ;
    vector<bool> result = kidsWithCandies(candies , extraCandies) ;
    cout<<"[" ;
    for(bool i : result){
        cout<<i<<" ,";
    }
    cout<<"]"<<endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std ;

vector<int> finalPrices(vector<int>& prices) {
    vector<int> result ;
    int n = prices.size() ;
    for(int i = 0 ; i < n ; i++){
        int num = 0 ;
        for(int j = i+1 ; j < n ; j++){
            if(prices[j] <= prices[i]){
                num = prices[j] ;
                break ;
            }
        }
        if(num != 0){
            result.push_back(prices[i] - num ) ;
        }else{
            result.push_back(prices[i]) ;
        }

    }
    return result ;
}

int main(){
    vector<int> nums = {8,4,6,2,3} ;
    vector<int> result = finalPrices(nums) ;
    cout<<"[" ;
    for(int i : result){
        cout<<i << " ,";
    }
    cout<<"]" ;
    return 0 ;
}
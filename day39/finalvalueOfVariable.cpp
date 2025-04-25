#include<bits/stdc++.h>
using namespace std ;

int finalValueAfterOperations(vector<string>& operations) {
    int result = 0 ;
    for(string i : operations){
        if(i == "++X" || i== "X++" ){
            result++ ;
        }
        else if (i == "--X" || i== "X--" ){
            result-- ;
        }
    }
    return result ;
}

int main(){
    vector<string> operations = {"--X","X++","X++"} ;
    cout<<finalValueAfterOperations(operations) ; 
    return 0 ;
}
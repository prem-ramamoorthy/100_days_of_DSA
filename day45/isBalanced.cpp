#include<bits/stdc++.h>
using namespace std ;

bool isBalanced(string num) {
    int sumeven = 0 ; 
    int sumodd = 0;
    char c = '1';
    for(int i = 0 ; i < num.size() ; i++){
        if(i%2==0){
            sumeven+= num[i] - '0';
        }
        else{
            sumodd+=num[i] - '0' ;
        }
    }
    return sumeven == sumodd ;
}

int main(){
    cout<<isBalanced("24123") ;
    return 0 ;
}
#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int result = 0 ;
    int maxi = 0 ;
    for(int i : s){
        if(i=='('){
            result++;
            maxi = max(maxi , result );
        }
        if(i == ')'){
            result--;
        }
    }
    return maxi;
}

int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s) << endl;
    return 0;
}
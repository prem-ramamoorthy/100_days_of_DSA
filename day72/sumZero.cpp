#include<bits/stdc++.h>
using namespace std;

vector<int> sumZero(int n) {
        vector<int> result(n,0) ;
        int it = 1 ;
        if(n==1){
            return {0} ;
        }
        for(int i = 0 ; i < n/2 ; i++){
            result[i] = it ;
            result[n-i-1] = 0-it ;
            it++ ;
        }
        return result ;
    }

int main() {
    int n = 5; 
    vector<int> result = sumZero(n);
    
    cout << "Sum zero array: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
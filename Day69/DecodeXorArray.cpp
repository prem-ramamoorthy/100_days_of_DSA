#include<bits/stdc++.h>
using namespace std ;

vector<int> decode(vector<int>& encoded, int first) {
    int n = encoded.size();
    vector<int> result(n + 1);
    result[0] = first;

    for (int i = 0; i < n; ++i) {
        result[i + 1] = result[i] ^ encoded[i];
    }

    return result;
}

int main () {
    vector<int> nums  = { 1,2,4,5} ;
    int n = 1 ;
    vector<int> result = decode(nums,n) ;
    cout<<"[" ;
    for(int i : result ){
        cout<< i <<" " ;
    }
    cout<<"]" ;
    return 0 ;
}
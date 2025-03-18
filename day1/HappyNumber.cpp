#include <bits/stdc++.h>
using namespace std;

int main() {
    bool ishappynumber(int n);
    cout<<ishappynumber(19)<<endl;
    cout<<ishappynumber(2)<<endl;
    return 0;
}

bool ishappynumber(int n ){
    set<int> hash ;
    while (n!=1 && hash.count(n)==0 ){
        hash.insert(n);
        int value = 0 ; 
        while(n>0){
            int d = n % 10 ;
            value += d*d ;
            n = n /10 ;
        }
        n = value ;
    }
    return (n==1);
}

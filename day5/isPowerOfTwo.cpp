#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true ;
    }
    if(n<=0 || n%2){
        return false ;
    }
    return isPowerOfTwo(n/2);
}

int main() {
    cout<<isPowerOfTwo(8)<<endl;
    cout<<isPowerOfTwo(7)<<endl;
    return 0;
}
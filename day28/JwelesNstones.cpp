#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    map<char,int> hash ;
    for(char i : stones){
        hash[i]++;
    }
    int count = 0 ;
    for(char i : jewels){
        count+=hash[i] ;
    }
    return count ;
}

int main() {
    cout<<numJewelsInStones("aA" , "aAAbbbb")<<endl ;
    return 0;
}

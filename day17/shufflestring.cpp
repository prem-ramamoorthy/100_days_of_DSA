#include <bits/stdc++.h>
using namespace std;

string shufflestring(string s , vector<int> indices ){
    map<int,char> order ;
    for(int i = 0 ; i < indices.size() ; i ++ ){
        order[indices[i]] = s[i] ;
    }
    string res ;
    for(auto i : order){
        res+=i.second ;
    }
    return res ;
}

int main() {
    string s = "codeleet" ;
    vector<int> indices = {4,5,6,7,0,2,1,3}  ;
    cout<<shufflestring(s,indices) ;
    return 0;

}
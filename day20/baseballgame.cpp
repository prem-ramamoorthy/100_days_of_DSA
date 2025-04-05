#include <bits/stdc++.h>
using namespace std;

int baseball(vector<string> list) {
    vector<int> result ;
    for(int i =0 ; i< list.size() ; i++){
        if(list[i]=="+"){
            result.push_back(result.back() + result[result.size() - 2]) ;
        }
        else if(list[i] == "D") {
            result.push_back(2*result.back());
        }
        else if(list[i] == "C"){
            result.pop_back() ;
        }
        else{
            result.push_back(stoi(list[i]));
        }
    }
    int sum = 0 ;
    for(int i : result ){
        sum+=i ;
    }
    return sum ;
}

int main() {
    vector<string> list = {"5","2","C","D","+"} ;
    cout<<baseball(list)<<endl ;
    return 0;
}
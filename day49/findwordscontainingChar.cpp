#include<bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> result ;
    for(int i =0; i< words.size() ; i++ ){
        if(words[i].find(x) != -1){
            result.push_back(i);
        }
    }
    return result ;
}

int main(){
    vector<string> words = {"abc","bcd","aaaa","cbc"} ;
    char x = 'c' ;
    vector<int> result = findWordsContaining(words,x) ;
    cout<<"[";
    for(int i : result ){
        cout<<i<<" ";
    }
    cout<<"]" ;
    return 0 ;
}
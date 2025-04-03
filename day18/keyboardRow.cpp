#include <bits/stdc++.h>
using namespace std;

vector<string> keyboardRow(vector<string> words){
    vector<string> keyboard = {"qwertyuiop" ,"asdfghjkl" , "zxcvbnm"} ;
    vector<string> result ;
    for(string word : words){
        string curr; 
        for(string keys : keyboard){
            if(find(keys.begin() , keys.end() , tolower(word[0])) != keys.end() ){
                curr = keys ;
                break ;
            }
        }
        bool valid = true ;
        for(char c : word){
            if(find(curr.begin() , curr.end() , tolower(c)) == curr.end()){
                valid = false ;
                break ;
            }
        }
        if(valid == true ){
            result.push_back(word) ;
        }
    }
    return result ;
}

int main() {
    vector<string> words = {"Hello","Alaska","Dad","Peace"} ;
    vector<string> result = keyboardRow(words) ;
    cout<<"[" ;
    for(string word : result){
        cout<<word <<" ,";
    }
    cout<<"]"<<endl;
    return 0;
}
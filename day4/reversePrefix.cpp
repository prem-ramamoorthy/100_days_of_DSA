#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word , char ch){
    vector<char> st ;
    bool got = false ;
    for(int i = 0 ; i < word.size() ; i++){
        if(word[i]==ch){
            st.push_back(word[i]);
            got = true ;
            break ;
        }
        else {
            st.push_back(word[i]);
        }
    }
    if(!got){
        return word ;
    }
    int c = st.size() ;
    string result ;
    reverse(st.begin() , st.end() ) ;
    for(int i = 0 ; i < word.size() ; i++){
        if(c>0){
            result += st[st.size() - c];
            c--;
        }
        else{
            result += word[i];
        }
    }
    return result ;
}

int main() {
    string word ; //abcdefd
    char ch ; //z
    cin >> word >> ch ;
    cout<<reversePrefix(word ,ch)<<endl;  //abcdefd
    word = "abcdefd" ;
    ch='d';
    cout<<reversePrefix(word ,ch)<<endl; //dcbaefd
    return 0; 
}
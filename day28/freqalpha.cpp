#include <bits/stdc++.h>
using namespace std;

string freqAlphabets(string s) {
    vector<string> words ;
    map<string,string> alpha = {{"1","a"} , {"2","b"} , {"3","c"} , {"4","d"} , {"5","e"} , {"6","f"} , 
                                {"7","g"} , {"8","h"} , {"9","i"} , {"10#","j"} , {"11#","k"} , {"12#","l"} , 
                                {"13#","m"} , {"14#","n"} , {"15#","o"} , {"16#","p"} , {"17#","q"} , {"18#","r"} ,
                                {"19#","s"} , {"20#","t"} , {"21#","u"} , {"22#","v"} , {"23#","w"} , {"24#","x"} , 
                                {"25#","y"} , {"26#","z"}} ;
    for(int i = 0 ; i < s.size() ; i++){
        if (s[i] == '#') {
            words.pop_back();
            words.pop_back();
            string word = "";
            word += s[i - 2];
            word += s[i - 1];
            word += s[i];
            words.push_back(alpha[word]);
        }
        else{
            string c = "" ;
            c+=s[i] ;
            words.push_back(alpha[c]) ;
        }
    }
    string result = "" ;
    for(string i : words){
        result+=i ;
    }
    return result ;
}

int main() {
    cout<<freqAlphabets("10#11#12") ;
    return 0;
}
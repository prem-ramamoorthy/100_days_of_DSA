#include <bits/stdc++.h>
using namespace std;

string clearDigits(string s){
    vector<char> st ;
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            if(st.size()>0 && isalpha(st.back())){
                st.pop_back();
            }
        }
        else{
            st.push_back(s[i]);
        }
    }
    string result ; 
    for(int i = 0 ; i < st.size() ; i++){
        result = result + st[i] ;
    }
    return result ; 
}


int main() {
    string s; 
    cin >> s;
    cout << clearDigits("ab2c3d4") << endl;
    cout << clearDigits(s) << endl;
    return 0;
}
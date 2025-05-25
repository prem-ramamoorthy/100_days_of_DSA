#include <bits/stdc++.h>
using namespace std;

string finalString(string s) {
        string result = "" ;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == 'i'){
                reverse(result.begin() , result.end()) ;
            }
            else{
                result+=s[i] ;
            }   
        }
        return result ;
    }

int main() {
    string s = "stringi";
    string result = finalString(s);

    cout << result << endl; 

    return 0;
}

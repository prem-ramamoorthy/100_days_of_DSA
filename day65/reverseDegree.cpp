 #include<bits/stdc++.h>
using namespace std;
 
 int reverseDegree(string s) {
        map<char, int> reverseOrd;
        for (char c = 'a'; c <= 'z'; ++c) {
            reverseOrd[c] = 'z' - c + 1;
        }
        int result = 0 ;
        int ind = 1 ; 
        for(char i : s){
            result+=reverseOrd[i]*ind ;
            ind++;
        }
        return result ;
    }

int main() {
    string s = "abc";
    cout << reverseDegree(s) << endl; 
    return 0;   
}
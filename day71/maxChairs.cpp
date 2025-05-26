#include<bits/stdc++.h>
using namespace std;


int minimumChairs(string s) {
        int curr = 0 ;
        int result = 0 ;
        for(char i : s){
            if(i=='E'){
                curr++;
                result = max(result , curr) ;
            }
            else{
                curr-- ;
            }
        }
        return result ;
    }

int main() {
    string s = "EEEEE";
    int result = minimumChairs(s);
    cout << "Minimum number of chairs needed: " << result << endl;
    return 0;
}
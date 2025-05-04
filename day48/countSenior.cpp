#include<bits/stdc++.h>
using namespace std;

int countSeniors(vector<string>& details) {
    int result = 0 ; 
    for(string i : details){
        if(stoi(i.substr(11, 2)) > 60){
            result++;
        }
    }
    return result ;
}

int main(){
    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    cout << countSeniors(details) << endl;
    return 0;
}
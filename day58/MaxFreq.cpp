#include<bits/stdc++.h>
using namespace std;

int maxFreqSum(string s) {
        map<char,int> con ;
        map<char, int > vow ;
        vector<char> vowels = {'a' , 'e' , 'i' , 'o' , 'u'} ;
        for(char i : s){
            if(find(vowels.begin() , vowels.end() , i)!= vowels.end()) {
                vow[i]++;
            }
            else{
                con[i]++;
            }
        }
        int vowhigh = 0 ;
        int conhigh = 0 ;
        for(auto i : vow){
            if(i.second > vowhigh ){
                vowhigh = i.second ;
            }
        }
        for(auto i : con){
            if(i.second > conhigh ){
                conhigh = i.second ;
            }
        }
        return conhigh + vowhigh ;
    }
int main() {
    string s = "abecdegh";
    cout << maxFreqSum(s) << endl;
    return 0;   

}
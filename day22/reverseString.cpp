#include <bits/stdc++.h>
using namespace std;

void ReverseString(vector<int>& s) {
        int st=0,end = s.size()-1;
        while (st < end){
            swap(s[st++],s[end--]);
        }
}

int main() {
    vector<int> s = {'H' , 'E' , 'L' , 'L' , 'O' };
    ReverseString(s) ;
    for(char i : s) {
        cout<<i;
    }
    return 0;
}
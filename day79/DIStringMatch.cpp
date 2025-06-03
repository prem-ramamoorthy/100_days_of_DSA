#include<bits/stdc++.h>
using namespace std;

vector<int> diStringMatch(string s) {
        int n = s.size() ;
        vector<int> result(n+1,0) ;
        for(int i = 0 ; i <= n ; i++ ){
            result[i] = i ;
        }
        bool correct = false ;
        while(!correct){
            correct = true ;
            for(int i = 0 ; i < n ; i ++){
                if(s[i] == 'I' && result[i] > result[i+1] ){
                    swap(result[i+1] , result[i]) ;
                    correct = false ;
                }
                if(s[i] == 'D'  && result[i] < result[i+1] ){
                    swap(result[i+1] , result[i]) ;
                    correct = false ;
                }
            }
        }
        
        return result ;
    }

int main() {
    string s = "IDID";
    vector<int> result = diStringMatch(s);
    cout << "Resulting permutation: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
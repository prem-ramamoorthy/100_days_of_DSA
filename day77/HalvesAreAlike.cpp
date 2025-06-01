include<bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s) {
        int n = s.size() ;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'} ;
        int a = 0 ;
        for(int i = 0 ; i < n /2 ; i++){
            if(find(vowels.begin() , vowels.end() , s[i]) != vowels.end() ) {
                a++;
            }
        }
        int b = 0 ;
        for(int i = n/2 ; i < n ; i++){
            if(find(vowels.begin() , vowels.end() , s[i]) != vowels.end()  ) {
                b++;
            }
        }
        return a==b ;
    }

int main() {
    string s = "bookkeeper";
    cout << halvesAreAlike(s) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
        vector<char> alpha = {'a' , 'b' , 'c' , 'd' , 'e' , 'f' ,'g', 'h', 'i' ,'j' , 'k',
        'l' , 'm' , 'n' ,'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' ,'w' ,'x' ,'y' , 'z'} ;
        for(char i : alpha) {
            if (find(sentence.begin() ,sentence.end() , i) == sentence.end()){
                return false ;
            }
        }
        return true ;
    }

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(s) << endl;
    return 0;   
}
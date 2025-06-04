#include<bits/stdc++.h>
using namespace std;

string generateTheString(int n) {
        string result = "" ;
        if(n%2!=0){
            int num = rand() % (119 - 99 + 1) + 99;
            for(int i = 0 ; i < n ; i ++){   
                result += char(num) ;
            }
        }
        else{
            int num = rand() % (119 - 99 + 1) + 99;
            for(int i = 0 ; i < n-1 ; i ++){
                result += char(num) ;
            }
            int num1 = rand() % (119 - 99 + 0) + 99;
            while(num1 == num) {
                num1 = rand() % (119 - 99 + 0) + 99;
            }            
            result += char(num1) ;
        }
        return result ;
    }

int main() {
    int n = 8;
    string oddString = generateTheString(n);
    cout << "Generated odd-length string: " << oddString << endl;
    return 0;
}
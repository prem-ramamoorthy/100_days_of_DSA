#include<bits/stdc++.h>
using namespace std;

bool squareIsWhite(string coordinates) {
        int x = 96 - coordinates[0] ;
        int y = coordinates[1] - '0';
        bool x_even = false ;
        bool y_even = false ;
        if(x%2==0){
            x_even = true ;
        }
        if(y%2==0){
            y_even = true ;
        }
        return x_even != y_even ;
    }

int main() {
    string coordinates = "a1"; 
    bool result = squareIsWhite(coordinates);
    cout << (result ? "White" : "Black") << endl;
    return 0;
}
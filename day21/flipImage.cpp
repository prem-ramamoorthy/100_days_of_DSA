#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipingImage(vector<vector<int>> image){
    vector<vector<int>> result ;
    for(auto i : image){
        reverse(i.begin() , i.end());
        vector<int> res ;
        for(int j = 0 ; j < i.size() ;j++){
            if(i[j] == 0){
                res.push_back(1) ;
            }
            else{
                res.push_back(0) ;
            }
        }
        result.push_back(res) ;
    }
    return result ;
}

int main() {
    vector<vector<int>> image = { {1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}} ;
    vector<vector<int>> result  = flipingImage(image);
    for(auto i : result ){
        cout<<"[" ;
        for(int j = 0 ; j< i.size() ; j++) {
            cout<< i[j]<< " ,";
        }
        cout<<"]"<<endl ;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> result ; 
        for(auto i : rectangles ){
            if(i[0] <= i[1]){
                result.push_back(i[0]);
            }
            else{
                result.push_back(i[1]) ;
            }
        }
        int max = *max_element(result.begin() , result.end() ) ;
        int ans = count(result.begin() ,result.end() , max) ;
        return ans ;
    }

int main() {
    vector<vector<int>> rectangles = {{5,8}, {3,6}, {4,6}, {2,8}};
    int result = countGoodRectangles(rectangles);
    cout << "Number of good rectangles: " << result << endl;
    return 0;
}
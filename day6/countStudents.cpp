#include <bits/stdc++.h>
using namespace std;


int countStudents(vector<int> students , vector<int> sandwiches){
    int count_0 = 0 ;
    int count_1 = 0 ;
    for(int student : students){
        if (student==0){
            count_0++;
        }
        else{
            count_1++;
        }
    }
    for(int sandwich : sandwiches){
        if(sandwich == 0 && count_0>0){
            count_0--;
        }
        else if (sandwich == 1 && count_1>0){
            count_1--;
        }
        else{
            break ;
        }
    }
    return count_1+count_0;
}


int main() {
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sandwiches ={1,0,0,0,1,1};
    cout<<countStudents(students , sandwiches)<<endl;
    return 0;
}
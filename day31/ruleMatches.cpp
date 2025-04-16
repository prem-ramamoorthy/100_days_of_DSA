    #include<bits/stdc++.h>
    using namespace std ;

    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0 ;
        for(vector<string> i : items ){
            if(ruleKey == "type"){
                if(i[0] == ruleValue){
                    result++; 
                }
            }
            else if(ruleKey == "color"){
                if(i[1] == ruleValue){
                    result++; 
                }
            }
            else if(ruleKey == "name"){
                if(i[2] == ruleValue){
                    result++; 
                }
            }
        }
        return result ;
    }

    int main() {
    
        vector<vector<string>> items = {
            {"phone", "blue", "pixel"},
            {"computer", "silver", "lenovo"},
            {"phone", "gold", "iphone"}
        };
        
        string rulevalue =  "color" ;
        string rulekey = "silver" ;

        cout<<countMatches(items ,rulevalue , rulekey ) ;
        return 0 ;
    }
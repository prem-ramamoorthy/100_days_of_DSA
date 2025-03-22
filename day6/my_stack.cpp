#include <bits/stdc++.h>
using namespace std;

class myStack{
    private :
        vector<int> stack ;
    public :
        myStack(){
        }
        int pop(){
            if(stack.size()<= 0 ){
                return -1 ; 
            }
            else{
                int element = stack.back();
                stack.pop_back();
                return element ;
            }
        }
        int top(){
            if(stack.size()<=0){
                return -1 ;
            }
            else{
                return stack.back() ;
            }
        }
        void push(int x ){
            stack.push_back(x);
        }
        bool empty(){
            return stack.size() == 0;
        }

};

int main() {
    myStack Stack ;
    Stack.push(1);
    Stack.push(2);
    cout<<Stack.top()<<endl; // return 2
    cout<<Stack.pop()<<endl; // return 2
    cout<<Stack.empty()<<endl; // return False
    return 0 ;
}
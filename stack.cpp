#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string s="((((())";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        if(s[i]==')' and st.top()=='('){
            st.pop();
        }
    }
    if(st.size()==0){
        cout <<"balanced\n";
    }
    else{
        cout <<"unbalanced\n";
    }
}
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=')'){
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"Balanced Parenthesis"<<endl;
    }
    else{
        cout<<"unbalanced parenthesis"<<endl;
    }
    return 0;
}
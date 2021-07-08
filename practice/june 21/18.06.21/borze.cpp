// link to this problem : "https://codeforces.com/problemset/problem/32/B"
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string str;
    string output="";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='.'){
            output+="0";
        }
        else if(str[i]=='-'){
            if(str[i+1]=='.'){
                output+="1";
                i++;
            }
            else if(str[i+1]=='-'){
                output+="2";
                i++;
            }
        }
    }
    cout<<output<<endl;
    return 0;
}
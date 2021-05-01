#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int a,b,oper;
        for(int i=0;i<str.length();i++){
            if(!isalpha(str[i])){
                a=stoi(str.substr(0,i));
                b=stoi(str.substr(i+1,str.length()-i-1));
                oper=stoi(str[i]);
            }
        }
    }
    return 0;
}
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
    if(s1>s2)cout<< 1<<endl;
    else if(s1<s2)cout<< -1<<endl;
    else cout<<0<<endl;
    return 0;
}
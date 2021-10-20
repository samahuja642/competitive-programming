#include<bits/stdc++.h>
using namespace std;
bool isAns(string str){
    int counta=0,countb=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'){
            counta++;
        }
        else{
            countb++;
        }
    }
    if(counta==countb){
        return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            for(int j=1;i+j<=n;j++){
                string str = s.substr(i,j);
                if(isAns(str)){
                    cout<<i+1<<" "<<i+j<<endl;
                    goto label;
                }
            }
        }
        cout<<-1<<" "<<-1<<endl;
        label:
        continue;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
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
        bool done = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'&&s[i+1]=='L'){
                done= 1;
                break;
            }
            else if(s[i]=='R'&&s[i+1]=='R'){
                done = 1;
                break;
            }
        }
        if(done==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
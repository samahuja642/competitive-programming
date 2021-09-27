#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        if(count==0&&s[0]=='0'){
            cout<<1<<endl;
        }
        else if(s[0]=='0'){
            cout<<count+1<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}
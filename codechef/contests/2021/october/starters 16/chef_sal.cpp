#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        int streak = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                int temp = 0;
                while(s[i]=='1'&&i!=s.length()){
                    temp++;
                    i++;
                }
                i--;
                streak = max(streak,temp);
            }
        }
        cout<<(count*x + streak*y)<<endl;
    }
    return 0;
}
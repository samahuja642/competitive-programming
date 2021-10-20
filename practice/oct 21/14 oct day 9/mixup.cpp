#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int rox[300001];
    rox[0]=0;
    for(int i=1;i<=300000;i++){
        rox[i]=rox[i-1]^i;
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int result = rox[a-1];
        int ans = a;
        if((result^b)==a){
            ans += 2;
        }
        else if((result^b)!=a){
            if(result!=b){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
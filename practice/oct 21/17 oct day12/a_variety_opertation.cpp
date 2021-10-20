#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int c,d;
        cin>>c>>d;
        if((d-c)%2==0){
            if(d-c==0&&d==0)cout<<0<<endl;
            else if(d-c==0)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
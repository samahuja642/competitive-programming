#include<iostream>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie();cout.tie();}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"(";
        }
        for(int j=1;j<=i;j++){
            cout<<")";
        }
        for(int j=i+1;j<=n;j++){
            cout<<"()";
        }
        cout<<endl;
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
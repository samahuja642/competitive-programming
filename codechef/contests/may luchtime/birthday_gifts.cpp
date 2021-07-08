#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll ifnotsib=0;
        for(ll i=0;i<(2*k)-1;i+=2){
            ifnotsib+=v[i];
        }
        int mine=0;
        for(ll i=1;i<=(2*k)-1;i+=2){
            mine+=v[i];
        }
        mine+=v[2*k];
        if(mine>=ifnotsib){
            cout<<mine<<endl;
        }
        else{
            cout<<ifnotsib<<endl;
        }
    }
    return 0;
}
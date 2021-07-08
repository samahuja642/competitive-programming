#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll x[q];
    for(ll i=0;i<q;i++){
        cin>>x[i];
    }
    
    for(ll i=0;i<q;i++){
        ll negative=0;
        for(ll j=0;j<n;j++){
            if(x[i]==a[j]){
                goto label;
            }
            if(x[i]<a[j]){
                negative++;
            }
        }
        if((negative&1)==0){
            cout<<"POSITIVE"<<endl;
            goto end;
        }
        else if((negative&1)==1){
            cout<<"NEGATIVE"<<endl;
            goto end;
        }
        label:
        cout<<"0"<<endl;
        end:
        continue;
    }

    return 0;
}
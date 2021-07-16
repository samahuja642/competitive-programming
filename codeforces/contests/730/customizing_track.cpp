#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll result=(sum%n)*(n-(sum%n));
        cout<<result<<endl;
    }
    return 0;
}
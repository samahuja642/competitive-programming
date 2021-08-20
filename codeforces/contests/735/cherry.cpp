#include<iostream>
#include<climits>
#include<vector>
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
        ll a[n];
        vector<ll>highest;
        ll high=INT_MIN;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>high){
                high=a[i];
            }
        }
        for(ll i=0;i<n;i++){
            if(high==a[i]){
                highest.push_back(i);
            }
        }
        ll product=INT_MIN;
        for(ll i=0;i<highest.size();i++){
            ll temp;
            if(highest[i]==0){
                temp=a[highest[i]]*a[highest[i]+1];
            }
            else if(highest[i]==n-1){
                temp=a[highest[i]]*a[highest[i]-1];
            }
            else{
                temp=max(a[highest[i]]*a[highest[i]-1],a[highest[i]]*a[highest[i]+1]);
            }
            if(temp>product){
                product=temp;
            }
        }
        cout<<product<<endl;
    }
    return 0;
}
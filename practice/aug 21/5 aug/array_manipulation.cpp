#include<iostream>
#include<climits>
using namespace std;
typedef long long ll;
const ll size = 1e7 + 10;
ll arr[size];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll n,m;
    cin>>n>>m;
    while(m--){
        ll a,b,k;
        cin>>a>>b>>k;
        arr[a-1]+=k;
        arr[b]-=k;
    }
    ll sum=0;
    for(ll i=1;i<n;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    ll maxi=INT_MIN;
    for(ll i=0;i<n;i++){
        maxi = max(arr[i],maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
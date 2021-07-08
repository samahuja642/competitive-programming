#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll candy[n];
    for(ll i=0;i<n;i++){
        candy[i]=(k/n);
    }
    k=ll(k%n);
    
    while(k){
        
        k--;
    }
    return 0;
}
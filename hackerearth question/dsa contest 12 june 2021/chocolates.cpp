// link to the problem "https://www.hackerearth.com/challenges/competitive/hackerearth-june-dsa-21/algorithm/chocolates-9-fa64ad7d/"
#include<iostream>
using namespace std;
typedef unsigned long long ull;
#define mod 998244353
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ull t;
    cin>>t;
    while(t--){
        ull n,m;
        cin>>n;
        cin>>m;
        ull a[n+1];
        a[n]=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ull count=1;
        while(count<m){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n+1;j++){
                    a[i]=(a[i]+(a[j]%mod))%mod;
                }
            }
            count++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]%mod<<" ";
        }
        cout<<endl;
    }
    return 0;
}
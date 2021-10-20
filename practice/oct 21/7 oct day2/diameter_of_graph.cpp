#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        long long ans;
        if(m<=((n*(n-1))/2)){
            if(m<=n-1){
                ans=n-1;
            }
            else if(m<((n*(n-1))/2)){
                ans=ceil(n/2);
            }
            else{
                ans=1;
            }
            if(ans < k-1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
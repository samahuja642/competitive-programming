#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
unsigned long long binary_exp(unsigned long long a,unsigned long long b){
    if(b==0)return 1;
    else if(b==1)return a;
    unsigned long long temp = binary_exp(a,b/2)%mod;
    unsigned long long result = temp * temp;
    if(b%2!=0)result = ((result%mod) * (a%mod))%mod;
    return result%mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    unsigned long long t;
    cin>>t;
    while(t--){
        unsigned long long n,k;
        cin>>n>>k;
        unsigned long long i=0;
        unsigned long long ans=0;
        while(k>0){
            if((k&1)==1){ans = (ans + (binary_exp(n,i)%mod))%mod;}
            i++;
            k=k>>1;
            ans = ans % mod;
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}
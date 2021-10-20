#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long x = max(b-a+1,c-a+1);
        long long y = max(c-b+1,a-b+1);
        long long z = max(b-c+1,a-c+1);
        cout<<max(x,0LL)<<" "<<max(y,0LL)<<" "<<max(z,0LL)<<endl;
    }
    return 0;
}
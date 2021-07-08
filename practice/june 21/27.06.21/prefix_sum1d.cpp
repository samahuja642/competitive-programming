#include<iostream>
using namespace std;
const int m=1e5+10;
int a[m];
int pf[m];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}
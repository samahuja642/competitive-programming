#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int ps[n+1]={0},a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            ps[i+1]=ps[i]+a[i];
        }
        cout<<(ps[p]*y+(p-ps[p])*x)<<endl;
    }
    return 0;
}
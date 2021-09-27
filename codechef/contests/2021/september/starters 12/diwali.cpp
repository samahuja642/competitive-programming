#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long anar = x*a + b;
        long long chakri = y*a + c;
        long long something = min(anar,chakri);
        cout<<(p/something)<<endl;
    }
    return 0;
}
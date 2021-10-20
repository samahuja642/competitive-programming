// quick searching algorithm may be the thing you can learn but can do without it also 
#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long sum = a[n-1] + a[n-2];
        int ans = (h/(sum))*2 + ceil((h%(sum))/double(a[n-1]));
        cout<<ans<<endl;
    }
    return 0;
}
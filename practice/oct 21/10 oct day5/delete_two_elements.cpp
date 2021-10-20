#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    double t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        double a[n];
        double sum = 0;
        unordered_map<double,double>m;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            sum += a[i];
        }
        double k = 2*(sum/(double)n);
        double count = 0;
        for(long long i=0;i<n;i++){
            if(k/2==a[i])count+=(m[k-a[i]]-1);
            else count+=m[k-a[i]];
        }
        cout<<(long long)(count/2)<<endl;
    }
    return 0;
}
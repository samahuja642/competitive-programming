#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long product = 0;
        for(long long i=0;i<n-1;i++){
            long long temp = a[i] * a[i+1];
            product = max(product,temp);
        }
        cout<<product<<endl;
    }
    return 0;
}
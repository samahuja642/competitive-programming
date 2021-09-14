#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n, p , k;
        cin>>n>>p>>k;
        cout<<(((n-1)/k)*(p%k)+(p/k + 1)+ min(p%k,(n-1)%k+1))<<endl;
    }
    return 0;
}
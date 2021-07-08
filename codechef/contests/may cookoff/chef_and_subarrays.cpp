#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<(n/k)<<endl;
    }
    return 0;
}
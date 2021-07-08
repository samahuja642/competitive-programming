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
        int n,k,f;
        cin>>n>>k>>f;
        int s[n],e[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
            sum+=(e[i]-s[i]);
        }
        if((f-sum) >= k){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
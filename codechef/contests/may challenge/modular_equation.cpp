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
        int n,m;
        cin>>n>>m;
        int i=2;
        int result=n-1;
        while(i<=n){
            if(m%i==0){
                result+=n-i;
            }
            i++;
        }
        cout<<result<<endl;
    }
    return 0;
}
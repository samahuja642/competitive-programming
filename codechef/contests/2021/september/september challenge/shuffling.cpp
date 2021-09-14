#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int n_even=0,n_odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((a[i]&1)==0){
                n_even++;
            }
            else{
                n_odd++;
            }
        }
        if((n&1)==0){
            cout<<(min(n/2,n_odd)+min(n/2,n_even))<<endl;
        }
        else{
            cout<<(min(n/2,n_odd)+min(n/2+1,n_even))<<endl;
        }
    }
    return 0;
}
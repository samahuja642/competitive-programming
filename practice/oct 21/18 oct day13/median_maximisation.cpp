#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(s==1){
            if(n==1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            if(n==1)cout<<s<<endl;
            else{
                n = n - ceil((float)n/2) + 1;
                cout<<s/n<<endl;
            }
        }
    }
    return 0;
}
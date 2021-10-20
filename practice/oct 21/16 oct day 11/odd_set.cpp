#include<bits/stdc++.h>
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
        int a[2*n];
        int odd=0,even=0;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if((a[i]&1)==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
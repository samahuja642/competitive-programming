#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        bool fine = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            if(((i+1+x)>n)&&((i+1-x)<=0)){
                fine = 0;
            }
        }
        sort(b,b+n);
        if(fine==0){
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    fine = 0;
                    goto label;
                }
            }
            fine = 1;
        }
        label:
        if(fine==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
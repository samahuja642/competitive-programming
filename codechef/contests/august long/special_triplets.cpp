#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                if(((i%j)!=0) && (j%(i%j)== 0)){
                    // cout<<i<<" "<<j<<" "<<i%j<<endl;
                    count++;
                }
            }
            cout<<count<<" ";
        }
        cout<<count<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
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
        string st[2];
        cin>>st[0]>>st[1];
        bool done = 0;
        for(int i=0;i<n;i++){
            if(st[0][i]==st[1][i] && st[0][i]=='1')done=1;
        }
        if(done==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
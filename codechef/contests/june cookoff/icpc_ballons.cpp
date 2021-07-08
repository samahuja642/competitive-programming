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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool hash[8]={0};
        hash[0]=1;
        int count=0;
        int i=0;
        while(!all_of(hash,hash+8,[](bool x){return x;})){
            switch(a[i]){
                case 1:
                hash[1]=1;
                break;
                case 2:
                hash[2]=1;
                break;
                case 3:
                hash[3]=1;
                break;
                case 4:
                hash[4]=1;
                break;
                case 5:
                hash[5]=1;
                break;
                case 6:
                hash[6]=1;
                break;
                case 7:
                hash[7]=1;
                break;
            }
            i++;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
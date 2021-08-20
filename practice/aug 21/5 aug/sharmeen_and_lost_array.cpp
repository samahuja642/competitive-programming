#include<iostream>
#include<climits>
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
        int comp[n-1];
        for(int i=0;i<n-1;i++){
            cin>>comp[i];
        }
        int k=0;
        int lowest=INT_MAX;
        a[0]=k;
        for(int i=1;i<n;i++){
            if(comp[i-1]==0){
                a[i]=a[i-1];
            }
            else if(comp[i-1]==1){
                a[i]=a[i-1]+1;
            }
            else{
                a[i]=a[i-1]-1;
            }
            lowest=min(lowest,a[i]);
        }
        k = abs(lowest) + 1;
        a[0]=k;
        for(int i=1;i<n;i++){
            if(comp[i-1]==0){
                a[i]=a[i-1];
            }
            else if(comp[i-1]==1){
                a[i]=a[i-1]+1;
            }
            else{
                a[i]=a[i-1]-1;
            }
        }
        for(int i:a){
            cout<<i<<" ";
        }
    }
    return 0;
}
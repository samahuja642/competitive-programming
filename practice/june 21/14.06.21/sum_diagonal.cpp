// link to this problem "https://www.codechef.com/problems/SUMDIG2"
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
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i][i] + a[i][n-1-i]);
            if(i==n/2 && n&1==1){
                sum-=a[i][i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
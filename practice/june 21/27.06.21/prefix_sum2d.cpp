#include<iostream>
using namespace std;
const int m=(1e3+10);
int arr[m][m];
int pf[m][m];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]+pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(pf[c][d]-pf[a-1][d]-pf[c][d-1]+pf[a-1][b-1])<<endl;
    }
    return 0;
}
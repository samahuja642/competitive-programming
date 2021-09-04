#include<iostream>
#include<climits>
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
        int a[n],b[n-1];
        int suma=0,sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
            sumb+=b[i];
        }
        vector<int>poss;
        int x=INT_MAX;
        for(int i=0;i<n;i++){
                int temp=suma-a[i];
                if(((sumb-temp)/(n-1))>0&&((sumb-temp)%(n-1))==0)
                x=min(((sumb-temp)/(n-1)),x);
        }
        cout<<x<<endl;
    }
    return 0;
}
#include<climits>
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int lowest = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(lowest>a[i]){
                lowest = a[i];
            }
        }
        cout<<max(k-lowest,0)<<endl;
    }
    return 0;
}
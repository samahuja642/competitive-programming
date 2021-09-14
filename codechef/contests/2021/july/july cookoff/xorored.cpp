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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            a[i]^=a[0];
        }
        int orop = 0;
        for(int i=0;i<n;i++){
            orop = (orop | a[i]);
        }
        cout<<orop<<endl;
    }
    return 0;
}
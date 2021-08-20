#include<iostream>
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
        for(int i=0;i<n;i++)cin>>a[i];
        int count = 0 ;
        for(int i=0;i<n-1;i++){
            int mini = min(a[i],a[i+1]);
            int maxi = max(a[i],a[i+1]);
            if(((float)maxi/(float)mini)>2){
                while(((float)maxi/(float)mini)>2){
                    mini *= 2;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
// link -> https://www.codechef.com/LRNDSA01/problems/CARVANS
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max_speed = 1;
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                max_speed++;
            }
            else{
                a[i]=a[i-1];
            }
        }
        cout<<max_speed<<endl;
    }
    return 0;
}
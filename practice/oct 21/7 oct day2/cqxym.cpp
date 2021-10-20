#include<iostream>
#define MAX 1000000007
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
        int ans = 1;
        for(int i = 3; i <= 2 * n ;i++){
            ans = ((ans* 1LL * i) % MAX);
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        cin>>n>>a>>b;
        int totaltime=2*(180+n);
        int remaining=a+b;
        cout<<totaltime-remaining<<endl;
    }
    return 0;
}
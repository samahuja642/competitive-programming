#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int p[n+1],q[n+1];
    for(int i=1;i<=n;i++){
        cin>>p[i];
        q[p[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
    return 0;
}
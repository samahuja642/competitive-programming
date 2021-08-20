// link to this problem :- https://www.codechef.com/problems/CNOTE
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--)
    {int x,y,k,n;
    cin>>x>>y>>k>>n;
    int p[n],c[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]>=(x-y) && c[i]<=k){
            cout<<"LuckyChef"<<endl;
            goto label;
        }
    }
    cout<<"UnluckyChef"<<endl;
    label:
    continue;
    }
    return 0;
}
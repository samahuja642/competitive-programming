#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        set<int>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b.insert(a[i]);
        }
        int size=b.size();
        if(size>=(n-x)){
            cout<<n-x<<endl;
        }
        else{cout<<size<<endl;}
    }
    return 0;
}
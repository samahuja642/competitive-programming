#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x,v;
        int* ptr=a;
        int count=0;
        int result=1;
        int temp=0;
        for(int i=2;i<=n;i++){
            while(count<=i){
                result*=(*ptr+temp);
            }
        }
        for(int i=0;i<q;i++){
            
            cin>>x>>v;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n,r;
        int a[n],b[n],maxtension=0,temptension=0;
        for(int i=0;i<(n);i++){
            cin>>a[i];
        }
        int time;
        for(int i=0;i<(n);i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if((i+1)<=(n-1))
            time=(a[i+1]-a[i]);
            else{time=1;}
            temptension+=(b[i]*time);
            if(temptension>maxtension){
                maxtension=temptension;
            }
            temptension=temptension-(r*time);
            if(temptension<0){
                temptension=0;
            }
            continue;
        }
        cout<<maxtension<<endl;
        maxtension=0;
    }
    return 0;
}
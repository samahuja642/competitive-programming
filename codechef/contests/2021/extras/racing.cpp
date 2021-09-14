#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,r,m;
        cin>>x>>r>>m;
        r*=60;
        m*=60;
        int br,total=0;
        if(m%120!=0)
        {
            br=(r/x)-1;
        }
        else{
            br=(r/x);
        }
        total=br*2*60+(r%x)*2*60;
        if(total<=m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
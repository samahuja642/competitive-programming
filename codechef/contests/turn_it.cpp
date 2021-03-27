#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        int final=v*v;
        int initial=u*u;
        if(final>=initial-2*(a*s)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
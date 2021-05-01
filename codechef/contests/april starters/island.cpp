#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,ra,rb,d;
        cin>>x>>y>>ra>>rb>>d;
        int k=min(x/ra,y/rb);
        if(k>=d){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
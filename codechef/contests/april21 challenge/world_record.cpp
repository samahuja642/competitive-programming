#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float product=(k1*k2*k3*v);
        if((100/product)+0.005<(9.58))cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
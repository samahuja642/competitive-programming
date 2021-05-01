#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int amin,bmin,cmin,tmin,a,b,c;
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        if( amin<=a && bmin<=b && cmin<=c && tmin<=(a+b+c) ){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    return 0;
}
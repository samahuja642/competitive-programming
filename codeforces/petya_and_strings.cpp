#include<iostream>
using namespace std;
int value(string a){
    int val=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>=97){
            a[i]-=32;
            val+=a[i];
        }
        else{
            val+=a[i];
        }
    }
    return val;
}
int main()
{
    string a,b;
    cin>>a>>b;
    int x=value(a);
    int y=value(b);
    if(x==y){
        cout<<"0";
    }
    else if(x<y){
        cout<<"-1";
    }
    else{
        cout<<"1";
    }
    return 0;
}
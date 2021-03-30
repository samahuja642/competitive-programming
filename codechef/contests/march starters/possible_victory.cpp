#include<iostream>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int diff=r-c;
    o=20-o;
    if(diff<(o*36)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
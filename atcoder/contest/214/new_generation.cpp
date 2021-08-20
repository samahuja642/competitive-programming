#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    if(n<=125)cout<<4<<endl;
    else if(n<=211)cout<<6<<endl;
    else cout<<8<<endl;
    return 0;
}
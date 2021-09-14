#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s,t;
    cin>>s>>t;
    if(s<t)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
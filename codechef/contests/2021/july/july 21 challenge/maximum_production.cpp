#include<iostream>
using namespace std;
typedef long long ll;
#define mod 1e9+7
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int regular=(7*x);
        int other=(d*y+(7-d)*z);
        if(regular>other){
            cout<<regular<<endl;
        }
        else{
            cout<<other<<endl;
        }
    }
    return 0;
}
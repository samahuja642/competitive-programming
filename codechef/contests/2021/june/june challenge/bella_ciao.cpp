#include<iostream>
using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int D,d,p,q,amount;
    while(t--){
        cin>>D>>d>>p>>q;
        amount=D*p;
        while((D-d)>0){
            D-=d;
            amount+= (D*q);
        }
        cout<<amount<<endl;
    }
    return 0;
}
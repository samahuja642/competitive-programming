#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int n=2*abs(b-a);
        if(a<=n&&b<=n&&c<=n){
            int d;
            if(c>n/2){
                d = c - n/2;
            }
            else{
                d = n/2 + c;
            }
            if(d<=n){
                cout<<d<<endl;
            }
            else{
                cout<< -1<<endl;
            }
        }
        else{
            cout<< -1<<endl;
        }

    }
    return 0;
}
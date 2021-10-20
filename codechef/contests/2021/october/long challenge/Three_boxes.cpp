#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d-a-b<0){
            cout<<3<<endl;
        }
        else{
            if(d-a-b-c<0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}
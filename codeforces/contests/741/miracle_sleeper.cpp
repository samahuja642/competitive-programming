#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if((r/2)>=l){
            if(r%(r/2)==0){
                cout<<(r/2 -1)<<endl;
            }
            else{
                cout<<r/2<<endl;
            }
        }
        else{
            cout<<(r%l)<<endl;
        }
    }
    return 0;
}
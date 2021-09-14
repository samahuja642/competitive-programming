#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool one=0,zero=0;
        if(a==0||b==0||c==0){
            zero = true;
        }
        if(a==1||b==1||c==1){
            one = true;
        }
        if(zero==1 && one ==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
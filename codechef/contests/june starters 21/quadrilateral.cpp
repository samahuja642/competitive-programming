#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int a,b,c,d;
    while(t--){
        cin>>a>>b>>c>>d;
        bool quad=1;
        if(a+b+c+d!=360){
            quad=0;
        }
        if((a+c!=180) && (b+d!=180)){
            quad=0;
        }
        if(quad==0){
            cout<<"NO"<<endl;
        }
        if(quad==1){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
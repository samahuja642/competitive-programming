#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%6==0||n%8==0||n%10==0){
            cout<<n*2.5<<endl;
        }
        else{
            ll result=0;
            cout<<6-n%6<<endl;
            cout<<8-n%8<<endl;
            cout<<10-n%10<<endl;
            if((10-n%10)<=(8-n%8)&&(10-n%10)<=(6-n%6)){
                result = (n/10) * 25;
                result+=25;
            }
            else if((8-n%8)<=(10-n%10)&&(8-n%8)<=(6-n%6)){
                result = (n/10) * 20;
                result+=20;
            }
            else if((6-n%6)<=(10-n%10)&&(6-n%6)<=(8-n%8)){
                result = (n/6)*15;
                result+=15;
            }
            cout<<result<<endl;
        }
    }
    return 0;
}
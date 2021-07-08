#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll n;
    cin>>n;
    int count=0;
    while(n){
        if(n%10==4|| n%10==7){
            count++;
        }
        if(count>7){
            break;
        }
        n/=10;
    }
    if(count==4||count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
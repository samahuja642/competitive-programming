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
        int n;
        cin>>n;
        if(float(log(n)/log(2))==int(log(n)/log(2))){
            if(int(log(n)/log(2))<=1)cout<<1<<endl;
            else cout<<pow(2,(int(log(n)/log(2))-1))-1<<endl;
        }
        else cout<<pow(2,int(log(n)/log(2))) - 1<<endl;
    }
    return 0;
}
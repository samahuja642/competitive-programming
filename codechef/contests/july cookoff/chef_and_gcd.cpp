#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x&1)==0 && (y&1)==0){
            cout<<"0"<<endl;
        }
        else if((x&1)==1 && (y&1)==0){
            if(gcd(x,y)>1){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else if((x&1)==0 && (y&1)==1){
            if(gcd(x,y)>1){
                cout<<"0"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else if((x&1)==1 && (y&1)==1){
            if(gcd(x,y)>1){
                cout<<"0"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}
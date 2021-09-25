#include<iostream>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie();cout.tie();}
void pattern(int n){
    for(int i=0;i<=n;i++){
        cout<<"(";
    }
    for(int i=0;i<=n;i++){
        cout<<")";
    }
}
void solve(){
    int n;
    cin>>n;
    int temp = 0;
    while(temp<n){
        if(temp == 0){
            for(int i=0;i<n;i++){
                cout<<"()";
            }
            cout<<endl;
            temp++;
        }
        else{
            pattern(temp);
            int tempor = temp;
            tempor = (n - temp - 1);
            if(tempor==temp){
                pattern(temp-1);
            }
            else if(tempor<temp){
                if(tempor!=0)
                pattern(tempor-1);
            }
            else{
                while(tempor>temp){
                    // cout<<tempor<<endl;
                    pattern(temp);
                    tempor -= (temp+1);
                }
                if(tempor!=0){if(tempor==1){cout<<"()";}
                else{pattern(tempor-1);cout<<tempor<<endl;}}
            }
            cout<<endl;
            temp++;
        }
    }
}
        
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
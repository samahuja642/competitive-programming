#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long result = n*2.5;
        long long rem1=result%15,rem2=result%20,rem3=result%25;
        long long mina;
        if(rem1>=rem2&&rem1>=rem3){
            mina = 15;
        }
        else if(rem2>rem1&&rem2>=rem3){
            mina = 20;
        }
        else{
            mina = 25;
        }
        cout<<(long long)((ceil((double)result/(double)mina))*mina)<<endl;
    }
    return 0;
}
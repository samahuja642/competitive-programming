#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(n>=s){
            cout<<s<<endl;
        }
        else{
            cout<<2*n - s<<endl;
        }
    }
    return 0;
}
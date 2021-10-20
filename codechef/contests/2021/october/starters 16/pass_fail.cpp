#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int marks = x*3 - (n-x);
        if(marks>=p){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
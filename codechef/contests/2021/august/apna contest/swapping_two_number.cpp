#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        b = a+b;
        a = b - a;
        b = b - a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
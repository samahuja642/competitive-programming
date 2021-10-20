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
        int p = (float)log(n+1)/(float)log(2);
        cout<<pow(2,p)<<endl;
    }
    return 0;
}
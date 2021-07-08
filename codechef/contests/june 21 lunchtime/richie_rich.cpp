#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int a,b,x;
    while(t--){
        cin>>a>>b>>x;
        cout<<(float)(b-a)/(float)x<<endl;
    }
    return 0;
}
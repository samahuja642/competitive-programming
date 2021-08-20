#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    if(n>a){
        cout<<(a*x+(n-a)*y)<<endl;
    }
    else{
        cout<<(n*x)<<endl;
    }
    return 0;
}
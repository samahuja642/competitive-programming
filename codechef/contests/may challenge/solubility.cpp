#include<iostream>
using namespace std;
typedef int integer;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        integer result=0;
        result=(100-x)*b+a;
        result*=10;
        cout<<result<<endl;
    }
    return 0;
}
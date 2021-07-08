#include<iostream>
#include<cmath>
using namespace std;
int number(int n){
    int diff=INT_MAX;
    int j=0,mag=2050;
    while(n>2050){
        mag*=pow(10,j);
        diff=n-mag;
        if(diff<0){
            diff=(n-(mag*pow(10,j-1)));
            return 1+number(diff);
        }
        if(diff==0)
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        number(n);
    }
    return 0;
}
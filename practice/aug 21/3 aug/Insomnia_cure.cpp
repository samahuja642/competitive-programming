#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    cout<<(d/k+d/m-d/l-d/n);
    return 0;
}
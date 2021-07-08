#include<iostream>
using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int xa,xb,Xa,Xb;
    while(t--){
        cin>>xa>>xb>>Xa>>Xb;
        int No_of_coconuts_total;
        No_of_coconuts_total=(Xa/xa)+(Xb/xb);
        cout<<No_of_coconuts_total<<endl;
    }
    return 0;
}
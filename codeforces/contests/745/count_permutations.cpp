#include<iostream>
using namespace std;
#define high 1000000007
int fact(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    return product;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int factr[100000];
    for(int i=0;i<100000;i++){
        factr[i]=fact(i);
    }
    while(t--){
        int n;
        cin>>n;
        int total=0;
        for(int i=1;i<2*n;i++){
            total=int((int(total%high)+int(factr[i]%high))%high);
        }
        cout<<total%high<<endl;
    }
    return 0;
}
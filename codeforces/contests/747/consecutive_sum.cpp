#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<< -(n-1)<<" "<<n<<endl;
    }
    return 0;
}
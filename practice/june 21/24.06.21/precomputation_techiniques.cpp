// so you need to calculate factorial of a number 
// input
// T
// N
// and t and n both are of <= 10^5
// you need to compute this whole thing under 1sec 
// and as you know under 1sec it can undergo only 10^8 iteration only

#include<iostream>
using namespace std;
const int m=1e9+7;
const int n=1e5+10;
long long fact[n];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    fact[1]=1;
    fact[0]=1;
    for(int i=2;i<n;i++){
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<fact[k]<<endl;
    }
    return 0;
}
// If you do it regulary then it's complexity will be O(n2) but using precomputation you can see we have done it in O(n).

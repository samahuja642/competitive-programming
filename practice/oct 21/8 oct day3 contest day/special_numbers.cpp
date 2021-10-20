#include<iostream>
#include<vector>
#include<cmath>
#define MAX 1000000007
using namespace std;
vector<unsigned long long> count_bits(unsigned long long k){
    vector<unsigned long long>v;
    unsigned long long j=0;
    while(k>0){
        if((k&1)==1){
            v.push_back(j);
        }
        j++;
        k=k>>1;
    }
    return v;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    unsigned long long t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        unsigned long long k;
        cin>>k;
        vector<unsigned long long>v = count_bits(k);
        unsigned long long ans = 0;
        for(unsigned long long i=0;i<v.size();i++){
            ans = ((ans%MAX) + ((unsigned long long)(pow(n,v[i]))%MAX)) % MAX;
        }
        cout<<ans<<endl;
    }
    return 0;
}
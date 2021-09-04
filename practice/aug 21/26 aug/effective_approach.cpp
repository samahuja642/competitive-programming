#include<iostream>
using namespace std;
long long arr[100001];
int main(){
    long long n;
    cin>>n;
    long long a[n+1];
    for(long long i=1;i<=n;i++){cin>>a[i];arr[a[i]]=i;}
    long long m;
    cin>>m;
    long long vasya = 0;
    long long petya = 0;
    while(m--){
        long long temp;
        cin>>temp;
        vasya+=arr[temp];
        petya+=n+1-arr[temp];
    }
    printf("%I64d %I64d",vasya,petya);
    return 0;
}
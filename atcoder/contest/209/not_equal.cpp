#include<iostream>
using namespace std;
#define m 1000000007
int main(){
    long long n;
    cin>>n;
    long long c[n];
    for(long long i=0;i<n;i++)
    cin>>c[i];
    long long product=1;
    for(long long i=0;i<n;i++){
        product = (product*(c[i]-i))%m;
    }
    cout<<product<<endl;
    return 0;
}
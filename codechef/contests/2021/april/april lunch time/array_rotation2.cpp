#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long n;
    cin>>n;
    long long arr[n],sum=0;
    long long k=(pow(10,9)+7);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        sum = sum %k;
    }
    long long q;
    cin>>q;
    long long x; 
    long long result=0;
    
    while(q--){
        cin>>x;
        result=(2*sum)%k;
        sum=result%k;
        cout<<(result%k)<<endl;
    }
    return 0;
}
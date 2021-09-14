#include<iostream>
#include<climits>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long n,k;
    cin>>n>>k;
    long long a[n];
    long long maxi = INT_MIN;
    long long max_index;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(maxi<a[i]){
            maxi = a[i];
            max_index = i;
        }
    }
    for(long long i=0;i<max_index;i++){
        long long maxo = INT_MIN;
        if((max_index-i-1)<=k&&(max_index-i-1)>0){
            for(long long j=i;j<max_index;j++){
                maxo = max(maxo,a[i]);
            }
            if(a[i]==maxo){
                cout<<maxo<<endl;
                break;
            }
        }
        else{
            cout<<maxi<<endl;
            break;
        }
    }
    if(max_index==0){
        cout<<a[0]<<endl;
    }
    return 0;
}
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
long long a[200000+1];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        long long maxi=INT_MIN,max_index=-1;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(maxi<a[i]){
                maxi = a[i];
                max_index = i;
            }
        }
        vector<long long>v;
        for(long long i=0;i<n;i++){
            if(a[i]==maxi){
                v.push_back(i);
            }
        }
        long long count=0;
        for(long long i=0;i<v.size();i++){
            if(v[i]+1>=k){
                count+=(n-v[i]);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
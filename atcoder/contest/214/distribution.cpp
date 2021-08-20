#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long n;
    cin>>n;
    long long s[n+1]={0},t[n+1]={0};
    for(long long i=1 ;i<n+1;i++){
        cin>>s[i];
    }
    for(long long i=1;i<n+1;i++){
        cin>>t[i];
    }
    vector<long long>v;
    for(long long i=1;i<n+1;i++){
        if(i==1){
            cout<<t[i]<<endl;
        }
        else{
            for(long long &k:v){
                k+=(s[i-1]);
            }
            v.push_back(t[i-1]+s[i-1]);
            sort(v.begin(),v.end());
            cout<<min(v[0],t[i])<<endl;
        }
    }
    return 0;
}
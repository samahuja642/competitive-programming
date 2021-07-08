#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long n;
    cin>>n;
    long long p;
    cin>>p;
    vector<long long>v;
    long long count=0;
    for(long long i=1;i<=n;i++){
        if((n%i)==0){
            v.push_back(i);
            count++;
        }
        if(count>p){
            break;
        }
    }
    sort(v.begin(),v.end());
    if((p-1)<v.size()){
        cout<<v[p-1];
    }
    else{
        cout<<0;
    }
    return 0;
}
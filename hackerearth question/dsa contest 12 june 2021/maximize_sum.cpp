// link to the problem "https://www.hackerearth.com/challenges/competitive/hackerearth-june-dsa-21/algorithm/maximize-sum-0423b95e/"
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n,greater<int>());
        vector<int>v;
        for(int i=0;i<n;i++){
            ll sum=0;
            sum+=A[i];
            while(A[i]==A[i+1]){
                sum+=A[i];
                i++;
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end(),greater<int>());
        ll count=0;
        ll output=0;
        for(int i=0;i<v.size();i++){
            count++;
            if(count<=k){
                if(v[i]<=0){
                    break;
                }
                else{
                output+=v[i];
                }
            }
            else{
                break;
            }
        }
        cout<<output<<endl;
    }
    return 0;
}
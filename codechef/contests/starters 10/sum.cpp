#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<0){
                v.push_back(make_pair(a[i],i));
            }
        }
        sort(v.begin(),v.end());
        if(v.size()<=k){
            for(auto it=v.begin();it!=v.end();it++){
                a[it->second]=-a[it->second];
            }
            int sum = 0 ;
            for(int i=1;i<=n;i++){
                sum+=a[i];
            }
            cout<<sum<<endl;
        }
        else{
            int count=0;
            if(count!=k){
                for(auto it=v.begin();it!=v.end();it++){
                    a[it->second]=-a[it->second];
                    count++;
                    if(count==k){
                        break;
                    }
                }
            }
            int sum=0;
            for(int i=1;i<=n;i++){
                if(a[i]>0){
                    sum+=a[i];
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
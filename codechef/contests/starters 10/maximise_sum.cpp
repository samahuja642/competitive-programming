#include<iostream>
#include<map>
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
        map<int,int>m;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<0){
                m[a[i]]=i;
            }
        }
        if(m.size()<=k){
            for(auto it=m.begin();it!=m.end();it++){
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
                for(auto it=m.begin();it!=m.end();it++){
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
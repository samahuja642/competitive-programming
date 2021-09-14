#include<iostream>
#include<map>
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
        int n,m,x;
        cin>>n>>m>>x;
        map<int,int>ids;
        auto itr=ids.begin();
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            ids[temp]=i;
        }
        vector<int>v;
        for(auto it=ids.begin();it!=ids.end();it++){
            if(it->first >= m){
                if(v.size()==0)itr=it;
                v.push_back(it->second);
            }
        }
        if(v.size()<x){
            itr--;
            while(v.size()<x){
                v.push_back(itr->second);
                itr--;
            }
        }
        cout<<v.size()<<" ";
        sort(v.begin(), v.end());
        for(int k:v){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
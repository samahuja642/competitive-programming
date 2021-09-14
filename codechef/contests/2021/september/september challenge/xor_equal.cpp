#include<iostream>
#include<unordered_map>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        unordered_map<int,int>count;
        unordered_map<int,int>rox;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            count[temp]++;
            if(x){
                count[(temp^x)]++;
                rox[(temp^x)]++;
            }
        }
        int county=INT_MAX;
        pair<int,int>maxi;
        for(auto it=count.begin();it!=count.end();it++){
            if(maxi.second<it->second){
                maxi.first = it->first;
                maxi.second = it->second;
            }
        }
        for(auto it=count.begin();it!=count.end();it++){
            if(it->second==maxi.second){
                county = min(county,rox[it->first]);
            }
        }
        cout<<maxi.second<<" "<<county<<endl;
        count.clear();
        rox.clear();
    }
    return 0;
}
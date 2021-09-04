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
        vector<int>a;
        for(int i=0;i<n;i++)cin>>a[i];
        vector<pair<int,int>>v;
        for(int i=0;i<a.size();i++){
            v.push_back(make_pair(a[i],i));
        }
        sort(v.begin(),v.end());
        if((k&1)==1){
            int index = n - (k/2);
            label:
            if(n-1-index < k/2){
                index --;
                goto label;
            }
            else{
                cout<<v[index].first<<endl;
                vector<pair<int,int>>vect;
                int count=0;
                for(int i=index-k/2;count!=k;i++){
                    count++;
                    vect.push_back(make_pair(v[index].second,v[index].first));
                }
                sort(vect.begin(),vect.end());
                for(auto it:vect){
                    cout<<it.second<<" ";
                }
                cout<<endl;
            }
            
        }
        else{
            int index = n - k/2 - 1;
            la:
            if(n-1-index < k/2){
                index --;
                goto la;
            }
            else{
                cout<<v[index].first<<endl;
                vector<pair<int,int>>vect;
                int count=0;
                for(int i=index-k/2+1;count!=k;i++){
                    count++;
                    vect.push_back(make_pair(v[index].second,v[index].first));
                }
                sort(vect.begin(),vect.end());
                for(auto it:vect){
                    cout<<it.second<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
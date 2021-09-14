#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>>v;
    v.push_back(make_pair(0,d));
    v.push_back(make_pair(d,0));
    v.push_back(make_pair(n,n-d));
    v.push_back(make_pair(n-d,n));
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        float s1,s2,s3,s4;
        s1 = y-v[0].second - (float(v[1].second-v[0].second)/float(v[1].first-v[0].first))*(x-v[0].first);
        s2 = y-v[1].second - (float(v[2].second-v[1].second)/float(v[2].first-v[1].first))*(x-v[1].first);
        s3 = y-v[2].second - (float(v[3].second-v[2].second)/float(v[3].first-v[2].first))*(x-v[2].first);
        s4 = y-v[3].second - (float(v[0].second-v[3].second)/float(v[0].first-v[3].first))*(x-v[3].first);
        if(((s1*s3)<=0)&&(s2*s4<=0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
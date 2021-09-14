#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<pair<string,int>>v;
        v[n];
        for(int i=0;i<n;i++){
            pair<string,int>p;
            cin>>p.first;
            cin>>p.second;
            v.push_back(p);
        }
        
    }
    return 0;
}
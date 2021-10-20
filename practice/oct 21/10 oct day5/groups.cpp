#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                int temp;
                cin>>temp;
                v[i].push_back(temp);
            }
        } 
        unordered_set<int>s[5];
        for(int j=0;j<5;j++){
            for(int i=0;i<n;i++){
                if(v[i][j]==1){
                    s[j].insert(i);
                }
            }
        }
        vector<int>day;
        for(int i=0;i<5;i++){
            if(s[i].size()>=n/2)day.push_back(i);
        }
        bool done = 0;
        for(int i=0;i<day.size();i++){
            for(int j=0;j<day.size();j++){
                if(i!=j){
                    unordered_set<int>nue;
                    for(auto it:s[day[i]]){
                        nue.insert(it);
                    }
                    for(auto it:s[day[j]]){
                        nue.insert(it);
                    }
                    if(nue.size()==n){
                        done = 1;  
                        break;
                    }
                    nue.clear();
                }
            }
        }
        if(done==1){
            cout<<"YES"<<endl;
        }     
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        unordered_map<int,bool>s;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(i!=0&&i!=n-1){
                if(a[i+1]==a[i]||a[i-1]==a[i]){
                    v.push_back(i);
                    s.insert(i,1);
                }
            }
            else{
                if(i==0){
                    if(a[i]==a[i+1]){
                        v.push_back(i);
                        s.insert(i,1);
                    }
                    else{
                        if(a[i]==a[i-1]){
                            v.push_back(i);
                            s.insert(i,1);
                        }
                    }
                }
            }
        }
        int count = 0;
        for(int i=0;i<v.size();i++){
            if(s[v[i]+1]==1 && s[v[i]+2]==1){
                count++;
                int j = 3;
                while(s[v[i]+j]==1){
                    
                }
            }
        }
    }
    return 0;
}
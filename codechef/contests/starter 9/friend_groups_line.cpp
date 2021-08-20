#include<iostream>
#include<vector>
#include<stdlib.h>
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
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                v.push_back(i);
            }
        }
        int groups = 1;
        for(int i=0;i<(v.size()-1);i++){
            if(abs(v[i]-v[i+1])>k+1){
                v[i+1]--;
                groups++;
            }
        }
        cout<<groups<<endl;
    }
    return 0;
}
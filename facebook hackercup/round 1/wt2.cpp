#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;
int switches(string w,int n){
    int count = 0;
    stack<int>curr;
    for(int i=0;i<n;i++){
        if(w[i]!='F'){
            if(curr.empty()){
                curr.push(w[i]);
            }
            else{
                int temp = curr.top();
                if(w[i]=='X'||w[i]=='O'){
                    if(temp != w[i]){
                        curr.pop();
                        count++;
                        curr.push(w[i]);
                    }
                }
            }
        }
        
    }
    return int(count%1000000007);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    vector<pair<int,int>>v;
    int t;
    cin>>t;
    int total = t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=1;j+i<=s.length();j++){
                string str = s.substr(i,j);
                count = int((count + switches(str,j))%1000000007);
            }
        }
        v.push_back(make_pair(total-t,int(count%1000000007)));
        // cout<<"Case #"<< (total - t) << ": "<<int(count%1000000007)<<endl;
    }
    for(auto it:v){
        cout<<"Case #"<<it.first<<": "<<int(it.second%1000000007)<<endl;
    }
    return 0;
}
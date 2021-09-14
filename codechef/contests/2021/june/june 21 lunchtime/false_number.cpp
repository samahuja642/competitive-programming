#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        vector<int>v;
        // v.push_back(0);
        while(a){
            v.push_back(int(a%10));
            a=a/10;
        }
        if(v[0]!=1){
            v.push_back(1);
        }
        else{
            v.insert(v.end()-1,0);
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
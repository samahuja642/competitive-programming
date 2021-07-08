#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int l[k];
        for(int i=0;i<k;i++){
            cin>>l[i];
        }
        sort(l,l+k);
        int count=0;
        vector<int>v;
        for(int i=0;i<k;i++){
            if(l[i]==l[i+1]&&l[i]<=n){
            v.push_back(l[i]);
            while(l[i]==l[i+1]){
                i++;
            }
            count++;
            }
        }
        cout<<count<<" ";
        for(vector<int>::iterator i=v.begin();i!=v.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
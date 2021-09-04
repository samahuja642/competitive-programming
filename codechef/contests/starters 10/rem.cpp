#include<iostream>
#include<algorithm>
#include<vector>
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
        int a[n],b[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n-1);
        vector<int>v;
        for(int i=0;i<n-1;i++){
            v.push_back(b[i]-a[0]);
        }
        for(int i=0;i<n-1;i++){
            auto it = find(v.begin(),v.end(),(b[i]-a[1]));
            if(it!=v.end()){
                cout<<*it<<endl;
            }
        }
    }
    return 0;
}
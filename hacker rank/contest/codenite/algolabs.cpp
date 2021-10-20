#include<iostream>
#include<map>
using namespace std;
int f(int a, int b){
    int ans = 0;
    if(b>a){
        for(int i=a;i<=b;i++){
            ans = ans ^ i;
        }
    }
    else{
        for(int i=b;i<=a;i++){
            ans = ans ^ i;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    int q;
    cin>>q;
    while(q--){
        map<pair<int,int>,int>m;
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        for(int i=min(f(a1,a2),f(a3,a4));i<=max(f(a1,a2),f(a3,a4));i++){
            a[i]+=(a1^a2^a3^a4);
        }
        int d1 = min(f(a1,a2),f(a3,a4));
        int d2 = max(f(a1,a2),f(a3,a4));
        m.insert(make_pair(d1,d2),a1^a2^a3^a4);
    }
    for(auto it = m.begin();it!=m.end();it++){
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        m[temp]=i;
    }
    auto it = m.end();
    it--;
    it--;
    cout<<it->second<<endl;
    return 0;
}
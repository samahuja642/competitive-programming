#include<iostream>
#include<algorithm>
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
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n,greater<int>());
        for(int i=0;i<n;i++)cout<<s[i]<<" ";
        cout<<endl;
        int count = 0;
        int j=k;
        while(s[j]==s[k-1]){
            count++;
            j++;
        }
        cout<<(k+count)<<endl;
    }
    return 0;
}
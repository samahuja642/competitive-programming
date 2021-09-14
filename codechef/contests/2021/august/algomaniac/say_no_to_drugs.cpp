#include<iostream>
#include<climits>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int s[n];
        int max = INT_MIN;
        int maxindex;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(max<=s[i]){
                max = s[i];
                maxindex = i;
            }
        }
        if(k<=0){
            if(maxindex==n-1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            if((l-1)*k+s[n-1]>max)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int answer=0;
        for(int i=0;i<n;i++){
            int same=0;
            int j=i;
            while(a[j]==a[i]){
                same++;
                j++;
            }
            i=j-1;
            if(same<=(a[i]-1)){
                answer+=same;
            }
            else{
                answer+=(a[i]-1);
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}
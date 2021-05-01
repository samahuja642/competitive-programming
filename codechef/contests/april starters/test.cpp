#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int x,y;
        cin>>n>>m;
        cin>>x>>y;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int done[n];
        int partially[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='F'){
                    done[i]++;
                }
                else if(a[i][j]=='P'){
                    partially[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(done[i]==x&&done[i]==x-1){
                if(done[i]==x){
                    cout<<"1";
                }
                else{
                    if(partially[i]>y)cout<<"0";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
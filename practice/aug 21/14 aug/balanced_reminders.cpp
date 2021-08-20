#include<iostream>
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
        int count[3]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0)count[0]++;
            else if(a[i]%3==1)count[1]++;
            else if(a[i]%3==2)count[2]++;
        }
        int ans=0;
        for(int i=0;i<3;i++){
            count[i]=(n/3)-count[i];
        }
        for(int i=0;i<3;i++){
            while(count[i]<0){
                for(int j=0;j<3;j++){
                    if(count[j]>0){
                        count[j]--;
                        count[i]++;
                        if(i==2&&i!=j){
                            if(j==0)ans++;
                            else ans+=2;
                        }
                        else if(i==1&&i!=j){
                            if(j==2)ans++;
                            else ans+=2;
                        }
                        else if(i==0&&i!=j){
                            if(j==1)ans++;
                            else ans+=2;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
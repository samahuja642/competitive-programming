#include<iostream>
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
        bool done[n]={false};
        int a[n];
        int count[k+1];
        int setbit=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0){
                done[i];
                setbit++;
            }
        }
        count[0]=setbit;
        for(int i=1;i<=k;i++){
            int temp = count[i-1];
            for(int j=0;j<n;j++){
                if(done[j]){
                    if(j+1<n && done[j+1]==false){
                        done[j+1]=true;
                        setbit++;
                    }
                    else if(j+1==n && done[0]==false){
                        done[0] = true;
                        setbit++;
                    }
                    if(j-1>=0 && done[j-1]==false){
                        done[j-1]=true;
                        setbit++;
                    }
                    else if(j-1<0 && done[n-1]==false){
                        done[n-1] = true;
                        setbit++;
                    }
                }
            }
            count[i] = setbit-temp;
        }
        int sum = 0;
        for(int i=0;i<n;i++)sum+=a[i];
        for(int i=1;i<=k;i++){
            sum+=(count[i-1]*2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
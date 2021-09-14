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
        int a[5];
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    continue;
                }
                for(int k=0;k<3;k++){
                    if(k==j||k==i){
                        continue;
                    }
                    if(a[i]+a[j]<=a[3]&&a[k]<=a[4]){
                        cout<<"Yes"<<endl;
                        goto label;
                    }
                }
            }
        }
        cout<<"No"<<endl;
        label:
        continue;
    }
    return 0;
}
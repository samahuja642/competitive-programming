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
        int index = 0;
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if((a[i])<0){
                b[index]=a[i];
                index++;
            }
        }
        for(int i=0;i<n;i++){
            if((a[i])>=0){
                b[index]=a[i];
                index++;
            }
        }
        for(int i=0 ;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
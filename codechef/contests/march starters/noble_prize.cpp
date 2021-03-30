#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int array[n];
        int flag[m]={0};
        for(int i=0;i<n;i++){
            cin>>array[n];
            flag[array[n]-1]++;
        }
        int k=0;
        for(int i=0;i<m;i++){
            if(flag[i]==0){
                cout<<"yes"<<endl;
                break;
            }
            else{
                k++;
            }
        }
        if(k==m){
            cout<<"no"<<endl;
        }
        
    }
    return 0;
}
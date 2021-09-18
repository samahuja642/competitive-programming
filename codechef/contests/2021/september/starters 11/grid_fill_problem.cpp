#include<iostream>
#include<vector>
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
        // vector<int>v[n];
        if((n&1)==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<-1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
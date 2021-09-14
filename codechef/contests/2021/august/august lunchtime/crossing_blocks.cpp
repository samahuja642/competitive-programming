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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        if(a[0]<a[1]){
            cout<<-1<<endl;
        }
        else{
            int move=0;
            for(int i=0;i<n;i++){
                vector<int>v;
                while(a[i+1]<=a[i]){
                    v.push_back(a[i+1]);
                    
                    i++;
                }
                move++;
            }
        }
    }
    return 0;
}
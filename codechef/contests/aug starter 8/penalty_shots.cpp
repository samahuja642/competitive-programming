#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a[10];
        int team1=0,team2=0;
        for(int i=0;i<10;i++){
            cin>>a[i];
            if((i&1)==0){
                team1+=a[i];
            }
            else{
                team2+=a[i];
            }
        }
        if(team1>team2){
            cout<<1<<endl;
        }
        else if(team1==team2){
            cout<<0<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a[3],b[3];
        int ans1=0,hero1=0;
        for(int i=0;i<3;i++){cin>>a[i];if(a[i]==1)ans1++;}
        for(int i=0;i<3;i++){cin>>b[i];if(b[i]==1)hero1++;}
        if(hero1==ans1){
            cout<<"Pass"<<endl;
        }
        else cout<<"Fail"<<endl;
    }
    return 0;
}
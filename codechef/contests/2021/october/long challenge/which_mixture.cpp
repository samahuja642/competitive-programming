#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<"Liquid"<<endl;
        }
        else if(b==0){
            cout<<"Solid"<<endl;
        }
        else{
            cout<<"Solution"<<endl;
        }
    }
    return 0;
}
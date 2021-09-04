#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        if(c==1){
            cout<<"Takahashi"<<endl;
        }
        else{
            cout<<"Aoki"<<endl;
        }
    }
    else{
        if(a>b){
            cout<<"Takahashi"<<endl;
        }
        else{
            cout<<"Aoki"<<endl;
        }
    }
    return 0;
}
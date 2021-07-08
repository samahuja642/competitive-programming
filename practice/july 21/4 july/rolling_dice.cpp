#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a,b;
    cin>>a>>b;
    int max=(6*a);
    int min=(1*a);
    if(max>=b&&min<=b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
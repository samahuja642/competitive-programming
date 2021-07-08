#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
    int x1,x2,y1,y2,z1,z2;
    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;
    cin>>z1;
    cin>>z2;
    if(x2>=x1 && y2>=y1 && z1>=z2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}
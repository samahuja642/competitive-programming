#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int xa,ya;
        cin>>xa>>ya;
        int xb,yb;
        cin>>xb>>yb;
        int xc,yc;
        cin>>xc>>yc;
        if(xa==xb){
            if((xb==xc)&&(yb<ya?yc<yb:yc>yb)){
                cout<<"YES"<<endl;
            }
            else if(yb==yc){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(ya==yb){
            if((yb==yc)&&(xb<xa?xc<xb:xc>xb)){
                cout<<"YES"<<endl;
            }
            else if(xb==xc){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
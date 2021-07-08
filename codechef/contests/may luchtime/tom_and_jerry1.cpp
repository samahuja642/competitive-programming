#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int k;
        cin>>k;
        int min_req=0;
        if((d-b)<0){
            min_req+=(b-d);
        }
        else{
            min_req+=(d-b);
        }
        if((c-a)<0){
            min_req+=(a-c);
        }
        else{
            min_req+=(c-a);
        }
        if(min_req==k){
            cout<<"Yes"<<endl;
        }
        else if(min_req<=(k+2)){
            if((k&1)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
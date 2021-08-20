#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s[4];
    bool done[4]={0};//h,2b,3b,hr
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    for(int i=0;i<4;i++){
        if(s[i]=="H"){
            done[0]=1;
        }
        else if(s[i]=="2B"){
            done[1]=1;
        }
        else if(s[i]=="3B"){
            done[2]=1;
        }
        else if(s[i]=="HR"){
            done[3]=1;
        }
    }
    for(int i=0;i<4;i++){
        if(done[i]==0){
            cout<<"No"<<endl;
            goto label;
        }
    }
    cout<<"Yes"<<endl;
    label:
    return 0;
}
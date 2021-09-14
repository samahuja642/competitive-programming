#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s[4];
    bool str[4]={0};
    for(int i=0;i<3;i++){
        cin>>s[i];
        if(s[i]=="ABC"){
            str[0]=1;
        }
        else if(s[i]=="ARC"){
            str[1]=1;
        }
        else if(s[i]=="AGC"){
            str[2]=1;
        }
        else{
            str[3]=1;
        }
    }
    for(int i=0;i<4;i++){
        if(str[i]==0){
            if(i==0){
                cout<<"ABC"<<endl;
            }
            else if(i==1){
                cout<<"ARC"<<endl;
            }
            else if(i==2){
                cout<<"AGC"<<endl;
            }
            else{
                cout<<"AHC"<<endl;
            }
            break;
        }
    }
    return 0;
}
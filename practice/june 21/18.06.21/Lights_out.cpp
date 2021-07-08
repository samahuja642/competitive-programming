// link to this problem is : "https://codeforces.com/problemset/problem/275/A"
#include<iostream>
using namespace std;
int main(){
    int swap[3][3];
    bool lights[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>swap[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=swap[i][j];
            if((i-1)>=0 && j<3){
                sum+=swap[i-1][j];
            }
            if((i+1)<3 && j<3){
                sum+=swap[i+1][j];
            }
            if(i>=0 && j-1>=0){
                sum+=swap[i][j-1];
            }
            if(i>=0 && j+1<3){
                sum+=swap[i][j+1];
            }
            if((sum&1)==0){
                lights[i][j]=1;
            }
            else{
                lights[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<lights[i][j];
        }
        cout<<endl;
    }
    return 0;
}
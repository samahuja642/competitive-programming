#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int r[5];
        int in=0,eng=0,dr=0;
        for(int i=0;i<5;i++){
            cin>>r[i];
            switch (r[i])
            {
                case 0:
                    dr++;
                    break;
                case 1:
                    in++;
                    break;
                case 2:
                    eng++;
                    break;
            }
        }
        if(in>eng){
            cout<<"INDIA"<<endl;
        }
        else if(in==eng){
            cout<<"DRAW"<<endl;
        }
        else{
            cout<<"ENGLAND"<<endl;
        }
    }
    return 0;
}
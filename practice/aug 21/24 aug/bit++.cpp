#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int x=0;
    int t;
    cin>>t;
    for(int i=0;i<t-1;i++){
        string temp;
        cin>>temp;
        if(temp[0]=='+'||temp[1]=='+')++x;
        else if(temp[0]=='-'||temp[1]=='-')--x;
    }
    string temp;
    cin>>temp;
    if(temp[0]='+'&&temp[1]=='+'){cout<<++x<<endl;}
    else if(temp[1]=='+'&&temp[2]=='+'){cout<<x++<<endl;}
    else if(temp[0]='-'&&temp[1]=='-'){cout<< --x<<endl;}
    else if(temp[1]=='-'&&temp[2]=='-'){cout<<x--<<endl;}
    return 0;
}
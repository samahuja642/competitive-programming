#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s;
    cin>>s;
    bool output = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'){output = 1;}
        else if(s[i]=='Q'){output = 1;}
        else if(s[i]=='9'){output = 1; }
        else if(s[i]<33 && s[i]>126){output = 0;break;}
    }
    if(output == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
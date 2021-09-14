#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int s[3];
        for(int i=0;i<3;i++){
            cin>>s[i];
        }
        if((s[1]<s[2])&&(s[1]<s[0])){
            cout<<"Bob"<<"\n";
        }
        else if((s[2]<s[1])&&(s[2]<s[0])){
            cout<<"Alice\n";
        }
        else{
            cout<<"Draw\n";
        }
    }
    return 0;
}
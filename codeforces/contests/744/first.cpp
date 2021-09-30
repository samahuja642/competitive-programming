#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countAC = 0;
        int countB = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A' || s[i]=='C'){
                countAC++;
            }
            else{
                countB++;
            }
        }
        if(countB==(countAC)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
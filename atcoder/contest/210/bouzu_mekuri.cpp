#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='1'){
        i++;
    }
    if((i&1)==0){
        cout<<"Takahashi"<<endl;
    }
    else{
        cout<<"Aoki"<<endl;
    }
    return 0;
}
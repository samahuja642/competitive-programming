#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int p[26];
    for(int i=0;i<26;i++){
        cin>>p[i];
    }
    for(int i=0;i<26;i++){
        cout<<char(p[i]-1+'a');
    }
    cout<<endl;
    return 0;
}
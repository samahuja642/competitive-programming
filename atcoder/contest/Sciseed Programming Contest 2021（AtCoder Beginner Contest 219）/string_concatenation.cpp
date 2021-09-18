#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s[3];
    for(int i=0;i<3;i++){
        cin>>s[i];
    }
    string output;
    string temp;
    cin>>temp;
    for(int i=0;i<temp.length();i++){
        output+=s[int(temp[i]-'0')-1];
    }
    cout<<output<<endl;
    return 0;
}
#include<iostream>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s;
    cin>>s;
    set<int>diff;
    for(int i=0;i<s.length();i++){
        diff.insert(s[i]);
    }
    if(((diff.size())&1)==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
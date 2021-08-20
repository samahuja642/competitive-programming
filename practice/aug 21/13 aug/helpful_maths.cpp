#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string str;
    cin>>str;
    vector<char>v;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            v.push_back(str[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0 ;i<v.size()-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];
    cout<<endl;
    return 0;
}
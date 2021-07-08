#include<iostream>
#include<map>
//for one key only one value exists
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    map<int,string>m;
    m[1]="abc";
    m[3]="cdc";
    m[5]="acd";
    m.insert({4,"afg"});
    m[3]+="arg";
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<" ";
    }
    cout<<endl;
    auto it = m.find(3);
    if(it==m.end()){
        cout<<"No value";
    }
    else{
        cout<<it->first<<" "<<it->second<<" ";
    }
    m.erase(3);
    auto iter=m.find(5);
    if(iter!=m.end()){
        m.erase(iter);
    }
    else{
        cout<<"element doesn't exist."<<endl; 
    }
    cout<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<" ";
    }
    m.clear();
    return 0;
}
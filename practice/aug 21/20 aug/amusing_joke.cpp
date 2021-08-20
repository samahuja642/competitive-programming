#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    map<char,int>total;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        total[a[i]]++;
    }
    string b;
    cin>>b;
    for(int i=0;i<b.length();i++){
        total[b[i]]++;
    }
    map<char,int>neu;
    string temp;
    cin>>temp;
    for(int i=0;i<temp.length();i++){
        neu[temp[i]]++;
    }
    bool correct=true;
    for(int i=0;i<26;i++){
        // if(total[char('a'+i)]!=neu[char('a'+i)]){
        //     correct = false;
        //     break;
        // }
        cout<<total[char('a'+i)]<<" "<<neu[char('a'+i)]<<endl;
    }
    if(correct==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
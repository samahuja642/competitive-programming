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
        total[a[i]]+=1;
    }
    string b;
    cin>>b;
    for(int i=0;i<b.length();i++){
        total[b[i]]+=1;
    }
    map<char,int>neu;
    string temp;
    cin>>temp;
    for(int i=0;i<temp.length();i++){
        neu[temp[i]]+=1;
    }
    bool correct = true;
    for(int i=0;i<26;i++){
        if(total[char('A'+i)]!=neu[char('A'+i)]){
            correct = false;
            break;
        }
    }
    if(correct==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
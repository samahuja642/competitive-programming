#include<iostream>
using namespace std;
bool post_pre(int prev,int present){
    if(prev>present){
        return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string s;
        int previous,current=str.find('a');
        for(int i=0;i<str.length();i++){
            if(i==0)
            {
                previous=-1;
                s+=char(97+i);
            }

            else{
                previous=current;
                current=str.find(97+i);
                bool priority=post_pre(previous,current);
                if(priority==1){
                    s=char(97+i)+s;
                }
                else{
                    s+=char(97+i);
                }
            }
        }
        if(s==str){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
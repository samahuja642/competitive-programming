#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    string tag;
    while(t--){
        cin>>tag;
        bool success=1;
        if(tag.length()<4){
            success=0;
            goto label;
        }
        if(tag[0]!='<'|| tag[1]!='/'){
            success=0;
            goto label;
        }
        for(int i=2;i<tag.length()-1;i++){
            if(((tag[i]>=48 && tag[i]<58))||((isalpha(tag[i]))&&islower(tag[i]))){
                
            }
            else{
                success=0;
            }
        }
        if(tag[tag.length()-1]!='>'){
            success=0;
            goto label;
        }
        label:
        if(success==0){
            cout<<"Error"<<endl;
        }
        else{
            cout<<"Success"<<endl;
        }
    }
    return 0;
}
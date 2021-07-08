#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        string w="";
        if(a[0]!='1'){
            w='1'+a;
        }
        else{
            w= a[0];
            w = w + '0';
            for(int i=1;i<a.length();i++){
                w = w+a[i];
            }
        }
        cout<<w<<endl;
    }
    return 0;
}